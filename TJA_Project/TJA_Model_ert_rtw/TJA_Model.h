/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TJA_Model.h
 *
 * Code generated for Simulink model 'TJA_Model'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Tue Oct 28 10:59:56 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TJA_Model_h_
#define TJA_Model_h_
#ifndef TJA_Model_COMMON_INCLUDES_
#define TJA_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* TJA_Model_COMMON_INCLUDES_ */

#include "TJA_Model_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const boolean_T RelationalOperator;  /* '<S1>/Relational Operator' */
  const boolean_T LogicalOperator;     /* '<S1>/Logical Operator' */
} ConstB_TJA_Model_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input_Voltage;                /* '<Root>/Input_Voltage' */
  boolean_T Input_Switch;              /* '<Root>/Input_Switch' */
  real_T Enable_Display;               /* '<Root>/Enable_Display' */
} ExtU_TJA_Model_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output_Display;               /* '<Root>/Output_Display' */
} ExtY_TJA_Model_T;

/* Real-time Model Data Structure */
struct tag_RTM_TJA_Model_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_TJA_Model_T TJA_Model_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TJA_Model_T TJA_Model_Y;
extern const ConstB_TJA_Model_T TJA_Model_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void TJA_Model_initialize(void);
extern void TJA_Model_step(void);
extern void TJA_Model_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TJA_Model_T *const TJA_Model_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Logical Operator1' : Unused code path elimination
 * Block '<Root>/Logical Operator' : Unused code path elimination
 * Block '<Root>/Relational Operator' : Unused code path elimination
 * Block '<Root>/Relational Operator1' : Unused code path elimination
 * Block '<Root>/VOLTAGE_MAXIMUM_RANGE' : Unused code path elimination
 * Block '<Root>/VOLTAGE_MINIMUM_RANGE' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TJA_Model'
 * '<S1>'   : 'TJA_Model/Displayunit'
 */
#endif                                 /* TJA_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
