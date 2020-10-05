/* Code generated for Simulink model autosar_LaneGuidance */
/* Generated on 05-Oct-2020 */

#include <cstdlib>
#include <thread>
#include <semaphore.h>
#include <array>
#include <exception>
#include <signal.h>
#include <ara/core/initialization.h>
#include <ara/exec/execution_client.h>
#include <ara/log/logger.h>
#include <ara/log/logging.h>
#include "MainUtils.hpp"
#include "autosar_LaneGuidance.h"

autosar_LaneGuidanceModelClass autosar_LaneGuidance_Obj;

/* To synchronize between the main thread and signal handler,  */
/* the following semaphore and boolean flag will be used. */
/* They must both be global so the main thread and signal  */
/* handler can access them. */
static sem_t baserate_tick;
static bool halt_application = false;

/* This is the signal handler which is called: */
/*  - When the base rate timer expires */
/*  - When we need to terminate */
/* It posts to a semaphore which tells main to do another  */
/* step or terminate. */
static void signal_handler(int signal)
{
  if (signal == SIGTERM) {
    halt_application = true;
  }                                    /* if */

  sem_post(&baserate_tick);
}

/* main() handles the following: */
/*  - Instantiates the model object and owns its memory. */
/*  - Reports the Execution state to ARA */
/*  - Calls the model's initialize and terminate functions. */
/*  - Sets up AsyncFunctionCall objects for each task */
/*      - Since AsyncFunctionCalls create threads, main also  */
/*        temporarily blocks SIGRTMIN and SIGTERM, so the threads  */
/*        will inherit the block and not respond to those  */
/*        signals. */
/*  - Responds to baserate_tick semaphore posts and runs  */
/*     applicable AsyncFunctionCalls. */
int main()
{
  /* ara function cluster init. */
  auto initStatus = ara::core::Initialize();
  if (!initStatus.HasValue()) {
    std::exit(EXIT_FAILURE);
  }                                    /* if */

  /* These tick variables represent how many base rate  */
  /* periods to wait before running a step function.  For  */
  /* example, step1_ticks=3 indicates every  */
  /* third base rate tick, we should run step1(). */
  int const step_ticks = 1;
  double const baserate = 0.100000;
  ara::log::Logger & log{
    ara::log::CreateLogger("autosar_LaneGuidance",
      "Logger for autosar_LaneGuidance's main function.")
  }

    ;

    /* Report Execution state */
    ara::exec::ExecutionClient exec_client;

    /* Lambda function to ease cleanup. */
    auto cleanupBeforeExit = [&](const char* szStr, const char* szErr)->void {
      log.LogError() << szStr << szErr;
      exec_client.ReportExecutionState(ara::exec::ExecutionState::kTerminating);

      /* ara function cluster deinit. */
      ara::core::Deinitialize();
    };

    try {
      exec_client.ReportExecutionState(ara::exec::ExecutionState::kRunning);
    } catch (std::exception const & e) {
      cleanupBeforeExit("Unable to report running state: ", e.what());
      std::exit(EXIT_FAILURE);
    }

    if (sem_init(&baserate_tick, 0, 0) == -1) {
      cleanupBeforeExit("Unable to initialize baserate_tick semaphore.\n", "");
      std::exit(EXIT_FAILURE);
    }                                  /* if */

    /* Register handler for SIGTERM */
    struct sigaction action;
    sigemptyset(&action.sa_mask);
    action.sa_handler = signal_handler;
    action.sa_flags = 0;
    if (sigaction(SIGTERM, &action, NULL) == -1) {
      cleanupBeforeExit("Unable to register SIGTERM handler.\n", "");
      std::exit(EXIT_FAILURE);
    }                                  /* if */

    /* Before spawning threads with StepFunction objects,  */
    /* block signals so the threads will not receive them. */
    block_signals(log);

    /* Initialize Functions */
    try {
      autosar_LaneGuidance_Obj.initialize();
    } catch (std::exception const & e) {
      cleanupBeforeExit("Unable to initialize: ", e.what());
      std::exit(EXIT_FAILURE);
    }

    /* Create StepFunctions objects to run step functions concurrently. */
    using StepFun = void (autosar_LaneGuidanceModelClass::*)();
    StepFunction<autosar_LaneGuidanceModelClass, StepFun> step_sf
      (&autosar_LaneGuidance_Obj, &autosar_LaneGuidanceModelClass::step, log);

    /* Start timer running at base rate. */
    Timer timer(baserate, signal_handler, log);
    timer.start();

    /* Once threads for the step functions have been created,  */
    /* unblock signals on the main thread so we can receive  */
    /* SIGRTMIN and SIGTERM */
    unblock_signals(log);

    /* Main loop, call step functions */
    int const tick_lcm = 1;
    int tick = 0;
    while (true) {
      if (sem_wait(&baserate_tick) == -1) {
        continue;
      }                                /* if */

      if (halt_application) {
        break;
      }                                /* if */

      tick = (tick+1) % tick_lcm;
      if (tick % step_ticks == 0) {
        step_sf.step();
      }                                /* if */
    }                                  /* while */

    step_sf.stop();

    /* Terminate Functions */
    autosar_LaneGuidance_Obj.terminate();
    cleanupBeforeExit("Exiting adaptive application.\n", "");
    return EXIT_SUCCESS;
  }
