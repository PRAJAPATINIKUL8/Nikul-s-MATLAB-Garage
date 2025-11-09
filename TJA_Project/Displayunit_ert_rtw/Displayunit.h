/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Displayunit.h
 *
 * Code generated for Simulink model 'Displayunit'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Tue Oct 28 10:57:59 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Displayunit_h_
#define Displayunit_h_
#ifndef Displayunit_COMMON_INCLUDES_
#define Displayunit_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* Displayunit_COMMON_INCLUDES_ */

#include "Displayunit_types.h"

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
} ConstB_Displayunit_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T Optimum_Voltage;           /* '<Root>/Optimum_Voltage' */
  boolean_T Input_Switch;              /* '<Root>/Input_Switch' */
  real_T Enable_Display;               /* '<Root>/Enable_Display' */
} ExtU_Displayunit_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output_Display;               /* '<Root>/Output_Display' */
} ExtY_Displayunit_T;

/* Real-time Model Data Structure */
struct tag_RTM_Displayunit_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Displayunit_T Displayunit_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Displayunit_T Displayunit_Y;
extern const ConstB_Displayunit_T Displayunit_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Displayunit_initialize(void);
extern void Displayunit_step(void);
extern void Displayunit_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Displayunit_T *const Displayunit_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Logical Operator1' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('TJA_Model/Displayunit')    - opens subsystem TJA_Model/Displayunit
 * hilite_system('TJA_Model/Displayunit/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TJA_Model'
 * '<S1>'   : 'TJA_Model/Displayunit'
 */
#endif                                 /* Displayunit_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
