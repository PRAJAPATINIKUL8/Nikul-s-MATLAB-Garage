/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TJA_Model.c
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

#include "TJA_Model.h"
#include "rtwtypes.h"

/* External inputs (root inport signals with default storage) */
ExtU_TJA_Model_T TJA_Model_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TJA_Model_T TJA_Model_Y;

/* Real-time model */
static RT_MODEL_TJA_Model_T TJA_Model_M_;
RT_MODEL_TJA_Model_T *const TJA_Model_M = &TJA_Model_M_;

/* Model step function */
void TJA_Model_step(void)
{
  /* Switch: '<S1>/Switch' incorporates:
   *  Outport: '<Root>/Output_Display'
   */
  TJA_Model_Y.Output_Display = TJA_Model_ConstB.LogicalOperator;
}

/* Model initialize function */
void TJA_Model_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void TJA_Model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
