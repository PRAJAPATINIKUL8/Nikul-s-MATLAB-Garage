/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Displayunit.c
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

#include "Displayunit.h"
#include "rtwtypes.h"

/* External inputs (root inport signals with default storage) */
ExtU_Displayunit_T Displayunit_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Displayunit_T Displayunit_Y;

/* Real-time model */
static RT_MODEL_Displayunit_T Displayunit_M_;
RT_MODEL_Displayunit_T *const Displayunit_M = &Displayunit_M_;

/* Model step function */
void Displayunit_step(void)
{
  /* Switch: '<S1>/Switch' incorporates:
   *  Outport: '<Root>/Output_Display'
   */
  Displayunit_Y.Output_Display = Displayunit_ConstB.LogicalOperator;
}

/* Model initialize function */
void Displayunit_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Displayunit_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
