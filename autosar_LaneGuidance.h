//
//  autosar_LaneGuidance.h
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


#ifndef RTW_HEADER_autosar_LaneGuidance_h_
#define RTW_HEADER_autosar_LaneGuidance_h_
#include <stddef.h>
#include <memory>
#include "rtwtypes.h"
#include "company/chassis/provided/providedinterface_skeleton.h"
#include "company/chassis/required/requiredinterface_proxy.h"

// Model Code Variants

// Macros for accessing real-time model data structure

// Block signals (default storage)
typedef struct {
  real_T MessageReceive;               // '<S1>/Message Receive'
  real_T MessageReceive_m;             // '<S2>/Message Receive'
  real_T MessageReceive_d;             // '<S3>/Message Receive'
  real_T MessageReceive_f;             // '<S4>/Message Receive'
  real_T MessageReceive_o;             // '<S5>/Message Receive'
  real_T MessageReceive_c;             // '<S6>/Message Receive'
} B_autosar_LaneGuidance_T;

// External inputs (root inport signals with default storage)
typedef struct {
  real_T msg;                          // '<Root>/leftLaneDistance'
  real_T msg_m;                        // '<Root>/leftTurnIndicator'
  real_T msg_c;                        // '<Root>/rightLaneDistance'
  real_T msg_k;                        // '<Root>/rightTurnIndicator'
  real_T msg_cx;                       // '<Root>/leftCarInBlindSpot'
  real_T msg_b;                        // '<Root>/rightCarInBlindSpot'
} ExtU_autosar_LaneGuidance_T;

// External outputs (root outports fed by signals with default storage)
typedef struct {
  real_T msg;                          // '<Root>/leftHazardIndicator'
  real_T msg_m;                        // '<Root>/rightHazardIndicator'
} ExtY_autosar_LaneGuidance_T;

// Class declaration for model autosar_LaneGuidance
class autosar_LaneGuidanceModelClass {
  // public data and function members
 public:
  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  autosar_LaneGuidanceModelClass();

  // Destructor
  ~autosar_LaneGuidanceModelClass();

  // private data and function members
 private:
  // Block signals
  B_autosar_LaneGuidance_T autosar_LaneGuidance_B;

  // Block variables
  std::shared_ptr<company::chassis::provided::skeleton::
    ProvidedInterfaceSkeleton> ProvidedPort;
  std::shared_ptr<company::chassis::required::proxy::RequiredInterfaceProxy>
    RequiredPort;

  // private member function(s) for subsystem '<S9>/IfActionSS'
  static void autosar_LaneGuidance_IfActionSS(real_T rtu_In1, real_T *rty_Out1);

  // private member function(s) for subsystem '<Root>'
  void RequiredPortLeftLaneDistanceReceive(ara::com::SamplePtr< company::chassis::
    required::proxy::events::LeftLaneDistance::SampleType const > samplePtr);
  void RequiredPortLeftTurnIndicatorReceive(ara::com::SamplePtr< company::
    chassis::required::proxy::events::LeftTurnIndicator::SampleType const >
    samplePtr);
  void RequiredPortLeftCarInBlindSpotReceive(ara::com::SamplePtr< company::
    chassis::required::proxy::events::LeftCarInBlindSpot::SampleType const >
    samplePtr);
  void RequiredPortRightLaneDistanceReceive(ara::com::SamplePtr< company::
    chassis::required::proxy::events::RightLaneDistance::SampleType const >
    samplePtr);
  void RequiredPortRightTurnIndicatorReceive(ara::com::SamplePtr< company::
    chassis::required::proxy::events::RightTurnIndicator::SampleType const >
    samplePtr);
  void RequiredPortRightCarInBlindSpotReceive(ara::com::SamplePtr< company::
    chassis::required::proxy::events::RightCarInBlindSpot::SampleType const >
    samplePtr);
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'autosar_LaneGuidance'
//  '<S1>'   : 'autosar_LaneGuidance/Event Receive'
//  '<S2>'   : 'autosar_LaneGuidance/Event Receive1'
//  '<S3>'   : 'autosar_LaneGuidance/Event Receive2'
//  '<S4>'   : 'autosar_LaneGuidance/Event Receive3'
//  '<S5>'   : 'autosar_LaneGuidance/Event Receive4'
//  '<S6>'   : 'autosar_LaneGuidance/Event Receive5'
//  '<S7>'   : 'autosar_LaneGuidance/Event Send'
//  '<S8>'   : 'autosar_LaneGuidance/Event Send1'
//  '<S9>'   : 'autosar_LaneGuidance/LaneGuidanceAlgorithm'
//  '<S10>'  : 'autosar_LaneGuidance/LaneGuidanceAlgorithm/IfActionSS'
//  '<S11>'  : 'autosar_LaneGuidance/LaneGuidanceAlgorithm/IfActionSS1'
//  '<S12>'  : 'autosar_LaneGuidance/LaneGuidanceAlgorithm/IfActionSS2'
//  '<S13>'  : 'autosar_LaneGuidance/LaneGuidanceAlgorithm/IfActionSS3'
//  '<S14>'  : 'autosar_LaneGuidance/LaneGuidanceAlgorithm/IfActionSS4'
//  '<S15>'  : 'autosar_LaneGuidance/LaneGuidanceAlgorithm/IfActionSS5'

#endif                                 // RTW_HEADER_autosar_LaneGuidance_h_
