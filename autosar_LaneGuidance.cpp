//
//  autosar_LaneGuidance.cpp
//
//  Code generation for model "autosar_LaneGuidance".
//
//  Model version              : 2.0
//  Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
//  C++ source code generated on : Mon Oct  5 19:52:02 2020
//
//  Target selection: autosar_adaptive.tlc
//  Embedded hardware selection: Intel->x86-64 (Linux 64)
//  Code generation objectives: Unspecified
//  Validation result: Not run


#include "autosar_LaneGuidance.h"

//
// Output and update for action system:
//    '<S9>/IfActionSS'
//    '<S9>/IfActionSS1'
//    '<S9>/IfActionSS2'
//    '<S9>/IfActionSS3'
//    '<S9>/IfActionSS4'
//    '<S9>/IfActionSS5'
//
void autosar_LaneGuidanceModelClass::autosar_LaneGuidance_IfActionSS(real_T
  rtu_In1, real_T *rty_Out1)
{
  // Inport: '<S10>/In1'
  *rty_Out1 = rtu_In1;
}

void autosar_LaneGuidanceModelClass::RequiredPortLeftLaneDistanceReceive(ara::
  com::SamplePtr< company::chassis::required::proxy::events::LeftLaneDistance::
  SampleType const > samplePtr)
{
  // Receive: '<S1>/Message Receive'
  autosar_LaneGuidance_B.MessageReceive = *samplePtr;
}

void autosar_LaneGuidanceModelClass::RequiredPortLeftTurnIndicatorReceive(ara::
  com::SamplePtr< company::chassis::required::proxy::events::LeftTurnIndicator::
  SampleType const > samplePtr)
{
  // Receive: '<S2>/Message Receive'
  autosar_LaneGuidance_B.MessageReceive_m = *samplePtr;
}

void autosar_LaneGuidanceModelClass::RequiredPortLeftCarInBlindSpotReceive(ara::
  com::SamplePtr< company::chassis::required::proxy::events::LeftCarInBlindSpot::
  SampleType const > samplePtr)
{
  // Receive: '<S3>/Message Receive'
  autosar_LaneGuidance_B.MessageReceive_d = *samplePtr;
}

void autosar_LaneGuidanceModelClass::RequiredPortRightLaneDistanceReceive(ara::
  com::SamplePtr< company::chassis::required::proxy::events::RightLaneDistance::
  SampleType const > samplePtr)
{
  // Receive: '<S4>/Message Receive'
  autosar_LaneGuidance_B.MessageReceive_f = *samplePtr;
}

void autosar_LaneGuidanceModelClass::RequiredPortRightTurnIndicatorReceive(ara::
  com::SamplePtr< company::chassis::required::proxy::events::RightTurnIndicator::
  SampleType const > samplePtr)
{
  // Receive: '<S5>/Message Receive'
  autosar_LaneGuidance_B.MessageReceive_o = *samplePtr;
}

void autosar_LaneGuidanceModelClass::RequiredPortRightCarInBlindSpotReceive(ara::
  com::SamplePtr< company::chassis::required::proxy::events::RightCarInBlindSpot::
  SampleType const > samplePtr)
{
  // Receive: '<S6>/Message Receive'
  autosar_LaneGuidance_B.MessageReceive_c = *samplePtr;
}

// Model step function
void autosar_LaneGuidanceModelClass::step()
{
  std::shared_ptr<ara::core::Result<size_t>> LeftLaneDistanceResultSharedPtr;
  real_T rtb_Merge1;
  if (RequiredPort.operator bool()) {
    LeftLaneDistanceResultSharedPtr = std::make_shared< ara::core::Result<size_t>
      >(RequiredPort->LeftLaneDistance.GetNewSamples(std::move(std::bind
          (&autosar_LaneGuidanceModelClass::RequiredPortLeftLaneDistanceReceive,
           this, std::placeholders::_1))));
    LeftLaneDistanceResultSharedPtr->ValueOrThrow();
  }

  if (RequiredPort.operator bool()) {
    LeftLaneDistanceResultSharedPtr = std::make_shared< ara::core::Result<size_t>
      >(RequiredPort->LeftTurnIndicator.GetNewSamples(std::move(std::bind
          (&autosar_LaneGuidanceModelClass::RequiredPortLeftTurnIndicatorReceive,
           this, std::placeholders::_1))));
    LeftLaneDistanceResultSharedPtr->ValueOrThrow();
  }

  if (RequiredPort.operator bool()) {
    LeftLaneDistanceResultSharedPtr = std::make_shared< ara::core::Result<size_t>
      >(RequiredPort->LeftCarInBlindSpot.GetNewSamples(std::move(std::bind
          (&autosar_LaneGuidanceModelClass::
           RequiredPortLeftCarInBlindSpotReceive, this, std::placeholders::_1))));
    LeftLaneDistanceResultSharedPtr->ValueOrThrow();
  }

  // If: '<S9>/If' incorporates:
  //   Constant: '<S9>/Constant'
  //   Constant: '<S9>/Constant1'
  //   Constant: '<S9>/Constant2'

  if (autosar_LaneGuidance_B.MessageReceive_d > 0.0) {
    // Outputs for IfAction SubSystem: '<S9>/IfActionSS' incorporates:
    //   ActionPort: '<S10>/Action Port'

    autosar_LaneGuidance_IfActionSS(1.0, &rtb_Merge1);

    // End of Outputs for SubSystem: '<S9>/IfActionSS'
  } else if ((autosar_LaneGuidance_B.MessageReceive_m == 0.0) &&
             (autosar_LaneGuidance_B.MessageReceive < 0.1)) {
    // Outputs for IfAction SubSystem: '<S9>/IfActionSS1' incorporates:
    //   ActionPort: '<S11>/Action Port'

    autosar_LaneGuidance_IfActionSS(0.0, &rtb_Merge1);

    // End of Outputs for SubSystem: '<S9>/IfActionSS1'
  } else {
    // Outputs for IfAction SubSystem: '<S9>/IfActionSS2' incorporates:
    //   ActionPort: '<S12>/Action Port'

    autosar_LaneGuidance_IfActionSS(1.0, &rtb_Merge1);

    // End of Outputs for SubSystem: '<S9>/IfActionSS2'
  }

  // End of If: '<S9>/If'

  // Send: '<S7>/Message Send'
  // Send event
  ProvidedPort->LeftHazardIndicator.Send(rtb_Merge1);
  if (RequiredPort.operator bool()) {
    LeftLaneDistanceResultSharedPtr = std::make_shared< ara::core::Result<size_t>
      >(RequiredPort->RightLaneDistance.GetNewSamples(std::move(std::bind
          (&autosar_LaneGuidanceModelClass::RequiredPortRightLaneDistanceReceive,
           this, std::placeholders::_1))));
    LeftLaneDistanceResultSharedPtr->ValueOrThrow();
  }

  if (RequiredPort.operator bool()) {
    LeftLaneDistanceResultSharedPtr = std::make_shared< ara::core::Result<size_t>
      >(RequiredPort->RightTurnIndicator.GetNewSamples(std::move(std::bind
          (&autosar_LaneGuidanceModelClass::
           RequiredPortRightTurnIndicatorReceive, this, std::placeholders::_1))));
    LeftLaneDistanceResultSharedPtr->ValueOrThrow();
  }

  if (RequiredPort.operator bool()) {
    LeftLaneDistanceResultSharedPtr = std::make_shared< ara::core::Result<size_t>
      >(RequiredPort->RightCarInBlindSpot.GetNewSamples(std::move(std::bind
          (&autosar_LaneGuidanceModelClass::
           RequiredPortRightCarInBlindSpotReceive, this, std::placeholders::_1))));
    LeftLaneDistanceResultSharedPtr->ValueOrThrow();
  }

  // If: '<S9>/If1' incorporates:
  //   Constant: '<S9>/Constant'
  //   Constant: '<S9>/Constant1'
  //   Constant: '<S9>/Constant2'

  if (autosar_LaneGuidance_B.MessageReceive_c > 0.0) {
    // Outputs for IfAction SubSystem: '<S9>/IfActionSS3' incorporates:
    //   ActionPort: '<S13>/Action Port'

    autosar_LaneGuidance_IfActionSS(1.0, &rtb_Merge1);

    // End of Outputs for SubSystem: '<S9>/IfActionSS3'
  } else if ((autosar_LaneGuidance_B.MessageReceive_o == 0.0) &&
             (autosar_LaneGuidance_B.MessageReceive_f < 0.1)) {
    // Outputs for IfAction SubSystem: '<S9>/IfActionSS4' incorporates:
    //   ActionPort: '<S14>/Action Port'

    autosar_LaneGuidance_IfActionSS(0.0, &rtb_Merge1);

    // End of Outputs for SubSystem: '<S9>/IfActionSS4'
  } else {
    // Outputs for IfAction SubSystem: '<S9>/IfActionSS5' incorporates:
    //   ActionPort: '<S15>/Action Port'

    autosar_LaneGuidance_IfActionSS(1.0, &rtb_Merge1);

    // End of Outputs for SubSystem: '<S9>/IfActionSS5'
  }

  // End of If: '<S9>/If1'

  // Send: '<S8>/Message Send'
  // Send event
  ProvidedPort->RightHazardIndicator.Send(rtb_Merge1);
}

// Model initialize function
void autosar_LaneGuidanceModelClass::initialize()
{
  {
    ara::com::ServiceHandleContainer< company::chassis::required::proxy::
      RequiredInterfaceProxy::HandleType > handles;
    ProvidedPort = std::make_shared< company::chassis::provided::skeleton::
      ProvidedInterfaceSkeleton >(ara::com::InstanceIdentifier("2"), ara::com::
      MethodCallProcessingMode::kPoll);
    ProvidedPort->OfferService();
    handles = company::chassis::required::proxy::RequiredInterfaceProxy::
      FindService(ara::com::InstanceIdentifier("1"));
    if (handles.size() > 0U) {
      RequiredPort = std::make_shared< company::chassis::required::proxy::
        RequiredInterfaceProxy >(*handles.begin());

      // Subscribe event
      RequiredPort->LeftCarInBlindSpot.Subscribe(1U);
      RequiredPort->LeftLaneDistance.Subscribe(1U);
      RequiredPort->LeftTurnIndicator.Subscribe(1U);
      RequiredPort->RightCarInBlindSpot.Subscribe(1U);
      RequiredPort->RightLaneDistance.Subscribe(1U);
      RequiredPort->RightTurnIndicator.Subscribe(1U);
    }
  }
}

// Model terminate function
void autosar_LaneGuidanceModelClass::terminate()
{
  ProvidedPort->StopOfferService();
}

// Constructor
autosar_LaneGuidanceModelClass::autosar_LaneGuidanceModelClass() :
  autosar_LaneGuidance_B()
{
  // Currently there is no constructor body generated.
}

// Destructor
autosar_LaneGuidanceModelClass::~autosar_LaneGuidanceModelClass()
{
  // Currently there is no destructor body generated.
}
