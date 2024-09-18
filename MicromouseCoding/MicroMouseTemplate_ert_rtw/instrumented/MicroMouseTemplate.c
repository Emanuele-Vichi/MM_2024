/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MicroMouseTemplate.c
 *
 * Code generated for Simulink model 'MicroMouseTemplate'.
 *
 * Model version                  : 4.10
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Sep 18 21:08:33 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MicroMouseTemplate.h"
#include "rtwtypes.h"
#include "MicroMouseTemplate_types.h"
#include "MicroMouseTemplate_private.h"
#include <string.h>
#include <math.h>
#include "stm_timer_ll.h"
#include "stm_adc_ll.h"

/* Named constants for Chart: '<Root>/HelloMicroMouse!' */
#define MicroMouseT_IN_InitialRightTurn ((uint8_T)1U)
#define MicroMouseTe_IN_InitialLeftTurn ((uint8_T)1U)
#define MicroMouseTe_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define MicroMouseTe_IN_StopCalibration ((uint8_T)2U)
#define MicroMouseTem_IN_EndCalibration ((uint8_T)1U)
#define MicroMouseTemp_IN_LineFollowing ((uint8_T)2U)
#define MicroMouseTemp_IN_RightReadings ((uint8_T)2U)
#define MicroMouseTempl_IN_LeftReadings ((uint8_T)2U)
#define MicroMouseTempla_IN_Calibration ((uint8_T)1U)
#define MicroMouseTempla_IN_Stabilising ((uint8_T)1U)
#define MicroMouseTemplate_IN_Forward  ((uint8_T)2U)
#define MicroMouseTemplate_IN_Forward_c ((uint8_T)1U)
#define MicroMouseTemplate_IN_StandBy  ((uint8_T)3U)
#define MicroMouseTemplate_IN_Stop     ((uint8_T)4U)
#define MicroMouseTemplate_IN_Stop_p   ((uint8_T)2U)
#define MicroMouseTemplate_IN_TurnLeft ((uint8_T)3U)
#define MicroMouseTemplate_IN_TurnRight ((uint8_T)4U)
#define MicroMouseTemplate_IN_VeerLeft ((uint8_T)3U)
#define MicroMouseTemplate_IN_VeerRight ((uint8_T)4U)

/* user code (top of source file) */
/* System '<Root>' */
extern I2C_HandleTypeDef hi2c2;

/* Exported block states */
real32_T IMU_Accel[3];                 /* '<S7>/Data Store Memory' */
real32_T IMU_Gyro[3];                  /* '<S7>/Data Store Memory1' */
int32_T currTicksRS;                   /* '<S1>/Data Store Memory2' */
int32_T currTicksLS;                   /* '<S1>/Data Store Memory4' */
uint16_T Thresholds[8];                /* '<S1>/Data Store Memory1' */
uint16_T ADC1s[9];                     /* '<S6>/Data Store Memory' */
uint16_T ADC_H[9];                     /* '<S6>/Data Store Memory1' */
uint16_T ADC_L[9];                     /* '<S6>/Data Store Memory2' */
boolean_T Detections[8];               /* '<S1>/Data Store Memory' */

/* Block signals (default storage) */
B_MicroMouseTemplate_T MicroMouseTemplate_B;

/* Block states (default storage) */
DW_MicroMouseTemplate_T MicroMouseTemplate_DW;

/* Real-time model */
static RT_MODEL_MicroMouseTemplate_T MicroMouseTemplate_M_;
RT_MODEL_MicroMouseTemplate_T *const MicroMouseTemplate_M =
  &MicroMouseTemplate_M_;

/* Forward declaration for local functions */
static void MicroMouseTemp_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj);
static void MicroMous_PWMOutput_setupImpl_d(stm32cube_blocks_PWMOutput_Mi_T *obj);
static void MicroMouseT_PWMOutput_setupImpl(stm32cube_blocks_PWMOutput_Mi_T *obj);

/* System initialize for atomic system: */
void MicroMouseTe_MATLABSystem1_Init(DW_MATLABSystem1_MicroMouseTe_T *localDW,
  P_MATLABSystem1_MicroMouseTem_T *localP)
{
  int32_T i;

  /* Start for MATLABSystem: '<S54>/MATLAB System1' */
  localDW->objisempty = true;
  localDW->obj.InitialCondition = localP->MATLABSystem1_InitialCondition;
  localDW->obj.isInitialized = 1;

  /*  Number of inputs */
  /*  Initialize the buffer during the first call */
  for (i = 0; i < 25; i++) {
    localDW->obj.Buffer[i] = localDW->obj.InitialCondition;
  }

  /* End of Start for MATLABSystem: '<S54>/MATLAB System1' */
}

/* Output and update for atomic system: */
void MicroMouseTemplat_MATLABSystem1(real_T rtu_0,
  B_MATLABSystem1_MicroMouseTem_T *localB, DW_MATLABSystem1_MicroMouseTe_T
  *localDW, P_MATLABSystem1_MicroMouseTem_T *localP)
{
  real_T rtu_0_0[25];

  /* MATLABSystem: '<S54>/MATLAB System1' */
  if (localDW->obj.InitialCondition != localP->MATLABSystem1_InitialCondition) {
    localDW->obj.InitialCondition = localP->MATLABSystem1_InitialCondition;
  }

  /*  Number of inputs */
  /*  Number of outputs */
  /*  Output the current state of the buffer */
  memcpy(&localB->MATLABSystem1[0], &localDW->obj.Buffer[0], 25U * sizeof(real_T));

  /*  Update the buffer */
  rtu_0_0[0] = rtu_0;
  memcpy(&rtu_0_0[1], &localDW->obj.Buffer[0], 24U * sizeof(real_T));
  memcpy(&localDW->obj.Buffer[0], &rtu_0_0[0], 25U * sizeof(real_T));

  /* End of MATLABSystem: '<S54>/MATLAB System1' */
}

/* System initialize for atomic system: */
void MicroMouseTe_MATLABSystem3_Init(DW_MATLABSystem3_MicroMouseTe_T *localDW,
  P_MATLABSystem3_MicroMouseTem_T *localP)
{
  int32_T i;

  /* Start for MATLABSystem: '<S54>/MATLAB System3' */
  localDW->objisempty = true;
  localDW->obj.InitialCondition = localP->MATLABSystem3_InitialCondition;
  localDW->obj.isInitialized = 1;

  /*  Number of inputs */
  /*  Initialize the buffer during the first call */
  for (i = 0; i < 10; i++) {
    localDW->obj.Buffer[i] = localDW->obj.InitialCondition;
  }

  /* End of Start for MATLABSystem: '<S54>/MATLAB System3' */
}

/* Output and update for atomic system: */
void MicroMouseTemplat_MATLABSystem3(real_T rtu_0,
  B_MATLABSystem3_MicroMouseTem_T *localB, DW_MATLABSystem3_MicroMouseTe_T
  *localDW, P_MATLABSystem3_MicroMouseTem_T *localP)
{
  real_T rtu_0_0[10];

  /* MATLABSystem: '<S54>/MATLAB System3' */
  if (localDW->obj.InitialCondition != localP->MATLABSystem3_InitialCondition) {
    localDW->obj.InitialCondition = localP->MATLABSystem3_InitialCondition;
  }

  /*  Number of inputs */
  /*  Number of outputs */
  /*  Output the current state of the buffer */
  memcpy(&localB->MATLABSystem3[0], &localDW->obj.Buffer[0], 10U * sizeof(real_T));

  /*  Update the buffer */
  rtu_0_0[0] = rtu_0;
  memcpy(&rtu_0_0[1], &localDW->obj.Buffer[0], 9U * sizeof(real_T));
  memcpy(&localDW->obj.Buffer[0], &rtu_0_0[0], 10U * sizeof(real_T));

  /* End of MATLABSystem: '<S54>/MATLAB System3' */
}

static void MicroMouseTemp_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S53>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void*)(&obj->ADCInternalBuffer[0]);
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC2;
  adcStructLoc.dmaPeripheralPtr = DMA1;
  adcStructLoc.dmastream = LL_DMA_CHANNEL_2;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_UNLIMITED;
  adcStructLoc.InternalBufferSize = 9U;
  adcStructLoc.RegularNoOfConversion = 9U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_DMA_INTERRUPT_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_ENABLE_9RANKS);
  enableADCAutomaticCalibrationOffset(obj->ADCHandle, 2);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
}

static void MicroMous_PWMOutput_setupImpl_d(stm32cube_blocks_PWMOutput_Mi_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<S49>/PWM Output' */
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S49>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel1(obj->TimerHandle, ENABLE_CH);
  enableTimerChannel2(obj->TimerHandle, ENABLE_CH);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S49>/PWM Output' */
    enableCounter(obj->TimerHandle, false);
  }
}

static void MicroMouseT_PWMOutput_setupImpl(stm32cube_blocks_PWMOutput_Mi_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<S47>/PWM Output' */
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S47>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel3(obj->TimerHandle, ENABLE_CH);
  enableTimerChannel4(obj->TimerHandle, ENABLE_CH);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S47>/PWM Output' */
    enableCounter(obj->TimerHandle, false);
  }
}

/* Model step function */
void MicroMouseTemplate_step(void)
{
  GPIO_TypeDef * portNameLoc;
  real_T maxV;
  real_T maxV_0;
  real_T maxV_1;
  real_T maxV_2;
  real_T maxV_3;
  real_T maxV_4;
  real_T minV;
  real_T minV_0;
  real_T u1;
  int32_T i;
  uint32_T pinReadLoc;
  uint16_T rtb_CastToDouble[8];
  int8_T rtPrevAction;
  boolean_T rtb_NOT;
  boolean_T rtb_NOT1;
  for (i = 0; i < 8; i++) {
    /* DataStoreWrite: '<S1>/Data Store Write' */
    Detections[i] = false;

    /* DataStoreWrite: '<S1>/Data Store Write1' */
    Thresholds[i] = 0U;
  }

  /* DataStoreWrite: '<S1>/Data Store Write2' */
  currTicksRS = 0;

  /* DataStoreWrite: '<S1>/Data Store Write3' */
  currTicksLS = 0;

  /* MATLABSystem: '<S53>/Analog to Digital Converter' */
  regularReadADCDMA(MicroMouseTemplate_DW.obj.ADCHandle, ADC_TRIGGER_AND_READ,
                    &ADC1s[0]);

  /* DSPFlip: '<S6>/Flip' incorporates:
   *  MATLABSystem: '<S53>/Analog to Digital Converter'
   */
  MicroMouseTemplate_B.Flip[0] = ADC1s[7];
  MicroMouseTemplate_B.Flip[7] = ADC1s[0];
  MicroMouseTemplate_B.Flip[1] = ADC1s[6];
  MicroMouseTemplate_B.Flip[6] = ADC1s[1];
  MicroMouseTemplate_B.Flip[2] = ADC1s[5];
  MicroMouseTemplate_B.Flip[5] = ADC1s[2];
  MicroMouseTemplate_B.Flip[3] = ADC1s[4];
  MicroMouseTemplate_B.Flip[4] = ADC1s[3];

  /* DataTypeConversion: '<S56>/Cast To Double' */
  for (i = 0; i < 8; i++) {
    rtb_CastToDouble[i] = MicroMouseTemplate_B.Flip[i];
  }

  /* End of DataTypeConversion: '<S56>/Cast To Double' */
  MicroMouseTemplat_MATLABSystem1((real_T)rtb_CastToDouble[0],
    &MicroMouseTemplate_B.MATLABSystem2_ci,
    &MicroMouseTemplate_DW.MATLABSystem2_ci,
    &MicroMouseTemplate_P.MATLABSystem2_ci);

  /* MinMax: '<S54>/Max of Elements' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System2'
   */
  maxV = MicroMouseTemplate_B.MATLABSystem2_ci.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem2_ci.MATLABSystem1[i + 1];
    if (maxV < u1) {
      maxV = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem3((real_T)rtb_CastToDouble[1],
    &MicroMouseTemplate_B.MATLABSystem4, &MicroMouseTemplate_DW.MATLABSystem4,
    &MicroMouseTemplate_P.MATLABSystem4);

  /* MinMax: '<S54>/Max of Elements1' incorporates:
   *  MATLABSystem: '<S54>/MATLAB System4'
   */
  maxV_0 = MicroMouseTemplate_B.MATLABSystem4.MATLABSystem3[0];
  for (i = 0; i < 9; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem4.MATLABSystem3[i + 1];
    if (maxV_0 < u1) {
      maxV_0 = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem1(maxV_0, &MicroMouseTemplate_B.MATLABSystem1,
    &MicroMouseTemplate_DW.MATLABSystem1, &MicroMouseTemplate_P.MATLABSystem1);

  /* End of MinMax: '<S54>/Max of Elements1' */

  /* MinMax: '<S54>/Min' incorporates:
   *  MATLABSystem: '<S54>/MATLAB System1'
   */
  minV = MicroMouseTemplate_B.MATLABSystem1.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem1.MATLABSystem1[i + 1];
    if (minV > u1) {
      minV = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem1((real_T)rtb_CastToDouble[2],
    &MicroMouseTemplate_B.MATLABSystem1_ci,
    &MicroMouseTemplate_DW.MATLABSystem1_ci,
    &MicroMouseTemplate_P.MATLABSystem1_ci);

  /* MinMax: '<S54>/Max of Elements2' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System1'
   */
  maxV_0 = MicroMouseTemplate_B.MATLABSystem1_ci.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem1_ci.MATLABSystem1[i + 1];
    if (maxV_0 < u1) {
      maxV_0 = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem1((real_T)rtb_CastToDouble[3],
    &MicroMouseTemplate_B.MATLABSystem3_c,
    &MicroMouseTemplate_DW.MATLABSystem3_c,
    &MicroMouseTemplate_P.MATLABSystem3_c);

  /* MinMax: '<S54>/Max of Elements3' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System3'
   */
  maxV_1 = MicroMouseTemplate_B.MATLABSystem3_c.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem3_c.MATLABSystem1[i + 1];
    if (maxV_1 < u1) {
      maxV_1 = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem1((real_T)rtb_CastToDouble[4],
    &MicroMouseTemplate_B.MATLABSystem4_c,
    &MicroMouseTemplate_DW.MATLABSystem4_c,
    &MicroMouseTemplate_P.MATLABSystem4_c);

  /* MinMax: '<S54>/Max of Elements4' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System4'
   */
  maxV_2 = MicroMouseTemplate_B.MATLABSystem4_c.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem4_c.MATLABSystem1[i + 1];
    if (maxV_2 < u1) {
      maxV_2 = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem1((real_T)rtb_CastToDouble[5],
    &MicroMouseTemplate_B.MATLABSystem5, &MicroMouseTemplate_DW.MATLABSystem5,
    &MicroMouseTemplate_P.MATLABSystem5);

  /* MinMax: '<S54>/Max of Elements5' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System5'
   */
  maxV_3 = MicroMouseTemplate_B.MATLABSystem5.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem5.MATLABSystem1[i + 1];
    if (maxV_3 < u1) {
      maxV_3 = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem3((real_T)rtb_CastToDouble[6],
    &MicroMouseTemplate_B.MATLABSystem3, &MicroMouseTemplate_DW.MATLABSystem3,
    &MicroMouseTemplate_P.MATLABSystem3);

  /* MinMax: '<S54>/Max of Elements6' incorporates:
   *  MATLABSystem: '<S54>/MATLAB System3'
   */
  maxV_4 = MicroMouseTemplate_B.MATLABSystem3.MATLABSystem3[0];
  for (i = 0; i < 9; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem3.MATLABSystem3[i + 1];
    if (maxV_4 < u1) {
      maxV_4 = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem1(maxV_4, &MicroMouseTemplate_B.MATLABSystem2,
    &MicroMouseTemplate_DW.MATLABSystem2, &MicroMouseTemplate_P.MATLABSystem2);

  /* End of MinMax: '<S54>/Max of Elements6' */

  /* MinMax: '<S54>/Min1' incorporates:
   *  MATLABSystem: '<S54>/MATLAB System2'
   */
  minV_0 = MicroMouseTemplate_B.MATLABSystem2.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    u1 = MicroMouseTemplate_B.MATLABSystem2.MATLABSystem1[i + 1];
    if (minV_0 > u1) {
      minV_0 = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem1((real_T)rtb_CastToDouble[7],
    &MicroMouseTemplate_B.MATLABSystem6, &MicroMouseTemplate_DW.MATLABSystem6,
    &MicroMouseTemplate_P.MATLABSystem6);

  /* MinMax: '<S54>/Max of Elements7' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System6'
   */
  maxV_4 = MicroMouseTemplate_B.MATLABSystem6.MATLABSystem1[0];

  /* MinMax: '<S54>/Max of Elements' */
  u1 = fmod(floor(maxV), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_H Write' incorporates:
   *  MinMax: '<S54>/Max of Elements'
   */
  ADC_H[0] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S54>/Min' */
  u1 = fmod(floor(minV), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_H Write' incorporates:
   *  MinMax: '<S54>/Min'
   */
  ADC_H[1] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S54>/Max of Elements2' */
  u1 = fmod(floor(maxV_0), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_H Write' incorporates:
   *  MinMax: '<S54>/Max of Elements2'
   */
  ADC_H[2] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S54>/Max of Elements3' */
  u1 = fmod(floor(maxV_1), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_H Write' incorporates:
   *  MinMax: '<S54>/Max of Elements3'
   */
  ADC_H[3] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S54>/Max of Elements4' */
  u1 = fmod(floor(maxV_2), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_H Write' incorporates:
   *  MinMax: '<S54>/Max of Elements4'
   */
  ADC_H[4] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S54>/Max of Elements5' */
  u1 = fmod(floor(maxV_3), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_H Write' incorporates:
   *  MinMax: '<S54>/Max of Elements5'
   */
  ADC_H[5] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S54>/Min1' */
  u1 = fmod(floor(minV_0), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_H Write' incorporates:
   *  Constant: '<S51>/Constant'
   *  MinMax: '<S54>/Min1'
   */
  ADC_H[6] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);
  ADC_H[8] = MicroMouseTemplate_P.Constant_Value_b;

  /* MinMax: '<S55>/Max of Elements8' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System2'
   */
  minV = MicroMouseTemplate_B.MATLABSystem2_ci.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    /* MinMax: '<S54>/Max of Elements7' incorporates:
     *  MATLABSystem: '<S56>/MATLAB System6'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem6.MATLABSystem1[i + 1];
    if (maxV_4 < u1) {
      maxV_4 = u1;
    }

    /* MinMax: '<S55>/Max of Elements8' incorporates:
     *  MATLABSystem: '<S56>/MATLAB System2'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem2_ci.MATLABSystem1[i + 1];
    if (minV > u1) {
      minV = u1;
    }
  }

  /* MinMax: '<S54>/Max of Elements7' */
  u1 = fmod(floor(maxV_4), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_H Write' incorporates:
   *  MinMax: '<S54>/Max of Elements7'
   */
  ADC_H[7] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);
  MicroMouseTemplat_MATLABSystem1((real_T)rtb_CastToDouble[1],
    &MicroMouseTemplate_B.MATLABSystem1_c,
    &MicroMouseTemplate_DW.MATLABSystem1_c,
    &MicroMouseTemplate_P.MATLABSystem1_c);

  /* MinMax: '<S55>/Max of Elements9' incorporates:
   *  MATLABSystem: '<S55>/MATLAB System1'
   */
  minV_0 = MicroMouseTemplate_B.MATLABSystem1_c.MATLABSystem1[0];

  /* MinMax: '<S55>/Max of Elements10' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System1'
   */
  maxV_0 = MicroMouseTemplate_B.MATLABSystem1_ci.MATLABSystem1[0];

  /* MinMax: '<S55>/Max of Elements11' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System3'
   */
  maxV_1 = MicroMouseTemplate_B.MATLABSystem3_c.MATLABSystem1[0];

  /* MinMax: '<S55>/Max of Elements12' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System4'
   */
  maxV_2 = MicroMouseTemplate_B.MATLABSystem4_c.MATLABSystem1[0];

  /* MinMax: '<S55>/Max of Elements13' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System5'
   */
  maxV_3 = MicroMouseTemplate_B.MATLABSystem5.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    /* MinMax: '<S55>/Max of Elements9' incorporates:
     *  MATLABSystem: '<S55>/MATLAB System1'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem1_c.MATLABSystem1[i + 1];
    if (minV_0 > u1) {
      minV_0 = u1;
    }

    /* MinMax: '<S55>/Max of Elements10' incorporates:
     *  MATLABSystem: '<S56>/MATLAB System1'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem1_ci.MATLABSystem1[i + 1];
    if (maxV_0 > u1) {
      maxV_0 = u1;
    }

    /* MinMax: '<S55>/Max of Elements11' incorporates:
     *  MATLABSystem: '<S56>/MATLAB System3'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem3_c.MATLABSystem1[i + 1];
    if (maxV_1 > u1) {
      maxV_1 = u1;
    }

    /* MinMax: '<S55>/Max of Elements12' incorporates:
     *  MATLABSystem: '<S56>/MATLAB System4'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem4_c.MATLABSystem1[i + 1];
    if (maxV_2 > u1) {
      maxV_2 = u1;
    }

    /* MinMax: '<S55>/Max of Elements13' incorporates:
     *  MATLABSystem: '<S56>/MATLAB System5'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem5.MATLABSystem1[i + 1];
    if (maxV_3 > u1) {
      maxV_3 = u1;
    }
  }

  MicroMouseTemplat_MATLABSystem1((real_T)rtb_CastToDouble[6],
    &MicroMouseTemplate_B.MATLABSystem2_c,
    &MicroMouseTemplate_DW.MATLABSystem2_c,
    &MicroMouseTemplate_P.MATLABSystem2_c);

  /* MinMax: '<S55>/Max of Elements14' incorporates:
   *  MATLABSystem: '<S55>/MATLAB System2'
   */
  maxV_4 = MicroMouseTemplate_B.MATLABSystem2_c.MATLABSystem1[0];

  /* MinMax: '<S55>/Max of Elements15' incorporates:
   *  MATLABSystem: '<S56>/MATLAB System6'
   */
  maxV = MicroMouseTemplate_B.MATLABSystem6.MATLABSystem1[0];
  for (i = 0; i < 24; i++) {
    /* MinMax: '<S55>/Max of Elements14' incorporates:
     *  MATLABSystem: '<S55>/MATLAB System2'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem2_c.MATLABSystem1[i + 1];
    if (maxV_4 > u1) {
      maxV_4 = u1;
    }

    /* MinMax: '<S55>/Max of Elements15' incorporates:
     *  MATLABSystem: '<S56>/MATLAB System6'
     */
    u1 = MicroMouseTemplate_B.MATLABSystem6.MATLABSystem1[i + 1];
    if (maxV > u1) {
      maxV = u1;
    }
  }

  /* MinMax: '<S55>/Max of Elements8' */
  u1 = fmod(floor(minV), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_L Write' incorporates:
   *  MinMax: '<S55>/Max of Elements8'
   */
  ADC_L[0] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S55>/Max of Elements9' */
  u1 = fmod(floor(minV_0), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_L Write' incorporates:
   *  MinMax: '<S55>/Max of Elements9'
   */
  ADC_L[1] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S55>/Max of Elements10' */
  u1 = fmod(floor(maxV_0), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_L Write' incorporates:
   *  MinMax: '<S55>/Max of Elements10'
   */
  ADC_L[2] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S55>/Max of Elements11' */
  u1 = fmod(floor(maxV_1), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_L Write' incorporates:
   *  MinMax: '<S55>/Max of Elements11'
   */
  ADC_L[3] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S55>/Max of Elements12' */
  u1 = fmod(floor(maxV_2), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_L Write' incorporates:
   *  MinMax: '<S55>/Max of Elements12'
   */
  ADC_L[4] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S55>/Max of Elements13' */
  u1 = fmod(floor(maxV_3), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_L Write' incorporates:
   *  MinMax: '<S55>/Max of Elements13'
   */
  ADC_L[5] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S55>/Max of Elements14' */
  u1 = fmod(floor(maxV_4), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_L Write' incorporates:
   *  MinMax: '<S55>/Max of Elements14'
   */
  ADC_L[6] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);

  /* MinMax: '<S55>/Max of Elements15' */
  u1 = fmod(floor(maxV), 65536.0);

  /* DataStoreWrite: '<S51>/ADC_L Write' incorporates:
   *  Constant: '<S51>/Constant1'
   *  MinMax: '<S55>/Max of Elements15'
   */
  ADC_L[7] = (uint16_T)(u1 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-u1 :
                        (int32_T)(uint16_T)u1);
  ADC_L[8] = MicroMouseTemplate_P.Constant1_Value;

  /* MATLABSystem: '<S74>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOB);

  /* Logic: '<S9>/NOT1' incorporates:
   *  MATLABSystem: '<S74>/Digital Port Read'
   * */
  rtb_NOT1 = ((pinReadLoc & 4U) == 0U);

  /* MATLABSystem: '<S72>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOE);

  /* Logic: '<S9>/NOT' incorporates:
   *  MATLABSystem: '<S72>/Digital Port Read'
   * */
  rtb_NOT = ((pinReadLoc & 64U) == 0U);

  /* Chart: '<Root>/HelloMicroMouse!' */
  if (MicroMouseTemplate_DW.temporalCounter_i1 < 31) {
    MicroMouseTemplate_DW.temporalCounter_i1++;
  }

  if (MicroMouseTemplate_DW.temporalCounter_i2 < 15) {
    MicroMouseTemplate_DW.temporalCounter_i2++;
  }

  if (MicroMouseTemplate_DW.bitsForTID0.is_active_c2_MicroMouseTemplate == 0) {
    MicroMouseTemplate_DW.bitsForTID0.is_active_c2_MicroMouseTemplate = 1U;
    MicroMouseTemplate_DW.bitsForTID0.is_c2_MicroMouseTemplate =
      MicroMouseTemplate_IN_StandBy;
  } else {
    switch (MicroMouseTemplate_DW.bitsForTID0.is_c2_MicroMouseTemplate) {
     case MicroMouseTempla_IN_Calibration:
      MicroMouseTemplate_B.LED_DOWN_L = true;
      MicroMouseTemplate_B.LED_DOWN_R = true;
      MicroMouseTemplate_B.LED_FWD_L = true;
      MicroMouseTemplate_B.LED_FWD_R = true;
      MicroMouseTemplate_B.LED_L = true;
      MicroMouseTemplate_B.LED_R = true;
      if (rtb_NOT) {
        MicroMouseTemplate_DW.bitsForTID0.is_EndCalibration =
          MicroMouseTe_IN_NO_ACTIVE_CHILD;
        MicroMouseTemplate_DW.bitsForTID0.is_VeerLeft =
          MicroMouseTe_IN_NO_ACTIVE_CHILD;
        MicroMouseTemplate_DW.bitsForTID0.is_VeerRight =
          MicroMouseTe_IN_NO_ACTIVE_CHILD;
        MicroMouseTemplate_DW.bitsForTID0.is_Calibration =
          MicroMouseTe_IN_NO_ACTIVE_CHILD;
        MicroMouseTemplate_DW.bitsForTID0.is_c2_MicroMouseTemplate =
          MicroMouseTemp_IN_LineFollowing;
        MicroMouseTemplate_B.LED0 = true;
        MicroMouseTemplate_DW.bitsForTID0.is_LineFollowing =
          MicroMouseTemplate_IN_Forward_c;
        MicroMouseTemplate_B.leftWheel_c = -85;
        MicroMouseTemplate_B.rightWheel = -85;
      } else {
        switch (MicroMouseTemplate_DW.bitsForTID0.is_Calibration) {
         case MicroMouseTem_IN_EndCalibration:
          MicroMouseTemplate_B.LED2 = false;
          if (MicroMouseTemplate_DW.bitsForTID0.is_EndCalibration ==
              MicroMouseTempla_IN_Stabilising) {
            MicroMouseTemplate_B.leftWheel_c = 75;
            MicroMouseTemplate_B.rightWheel = -75;
            if (MicroMouseTemplate_DW.temporalCounter_i1 >= 6) {
              MicroMouseTemplate_DW.bitsForTID0.is_EndCalibration =
                MicroMouseTe_IN_StopCalibration;
              MicroMouseTemplate_B.leftWheel_c = 0;
              MicroMouseTemplate_B.rightWheel = 0;
            }
          } else {
            /* case IN_StopCalibration: */
            MicroMouseTemplate_B.leftWheel_c = 0;
            MicroMouseTemplate_B.rightWheel = 0;
            MicroMouseTemplate_B.LED0 = !MicroMouseTemplate_B.LED0;
          }
          break;

         case MicroMouseTemplate_IN_Forward:
          MicroMouseTemplate_B.LED1 = true;
          if (MicroMouseTemplate_DW.temporalCounter_i1 >= 10) {
            MicroMouseTemplate_DW.temporalCounter_i1 = 0U;
            MicroMouseTemplate_DW.bitsForTID0.is_Calibration =
              MicroMouseTemplate_IN_VeerLeft;
            MicroMouseTemplate_B.LED0 = true;
            MicroMouseTemplate_B.LED1 = false;
            MicroMouseTemplate_DW.temporalCounter_i2 = 0U;
            MicroMouseTemplate_DW.bitsForTID0.is_VeerLeft =
              MicroMouseTe_IN_InitialLeftTurn;
            MicroMouseTemplate_B.leftWheel_c = 75;
            MicroMouseTemplate_B.rightWheel = -75;
          }
          break;

         case MicroMouseTemplate_IN_VeerLeft:
          MicroMouseTemplate_B.LED1 = false;
          if (MicroMouseTemplate_DW.temporalCounter_i1 >= 20) {
            MicroMouseTemplate_DW.bitsForTID0.is_VeerLeft =
              MicroMouseTe_IN_NO_ACTIVE_CHILD;
            MicroMouseTemplate_DW.temporalCounter_i1 = 0U;
            MicroMouseTemplate_DW.bitsForTID0.is_Calibration =
              MicroMouseTemplate_IN_VeerRight;
            MicroMouseTemplate_B.LED0 = false;
            MicroMouseTemplate_B.LED2 = true;
            MicroMouseTemplate_DW.temporalCounter_i2 = 0U;
            MicroMouseTemplate_DW.bitsForTID0.is_VeerRight =
              MicroMouseT_IN_InitialRightTurn;
            MicroMouseTemplate_B.leftWheel_c = -75;
            MicroMouseTemplate_B.rightWheel = 75;
          } else if (MicroMouseTemplate_DW.bitsForTID0.is_VeerLeft ==
                     MicroMouseTe_IN_InitialLeftTurn) {
            MicroMouseTemplate_B.leftWheel_c = 75;
            MicroMouseTemplate_B.rightWheel = -75;
            if (MicroMouseTemplate_DW.temporalCounter_i2 >= 5) {
              MicroMouseTemplate_DW.bitsForTID0.is_VeerLeft =
                MicroMouseTempl_IN_LeftReadings;
              MicroMouseTemplate_B.leftWheel_c = 0;
              MicroMouseTemplate_B.rightWheel = 0;
            }
          } else {
            /* case IN_LeftReadings: */
            MicroMouseTemplate_B.leftWheel_c = 0;
            MicroMouseTemplate_B.rightWheel = 0;
          }
          break;

         default:
          /* case IN_VeerRight: */
          MicroMouseTemplate_B.LED2 = true;
          if (MicroMouseTemplate_DW.temporalCounter_i1 >= 30) {
            MicroMouseTemplate_DW.bitsForTID0.is_VeerRight =
              MicroMouseTe_IN_NO_ACTIVE_CHILD;
            MicroMouseTemplate_DW.bitsForTID0.is_Calibration =
              MicroMouseTem_IN_EndCalibration;
            MicroMouseTemplate_B.LED2 = false;
            MicroMouseTemplate_DW.temporalCounter_i1 = 0U;
            MicroMouseTemplate_DW.bitsForTID0.is_EndCalibration =
              MicroMouseTempla_IN_Stabilising;
            MicroMouseTemplate_B.leftWheel_c = 75;
            MicroMouseTemplate_B.rightWheel = -75;
          } else if (MicroMouseTemplate_DW.bitsForTID0.is_VeerRight ==
                     MicroMouseT_IN_InitialRightTurn) {
            MicroMouseTemplate_B.leftWheel_c = -75;
            MicroMouseTemplate_B.rightWheel = 75;
            if (MicroMouseTemplate_DW.temporalCounter_i2 >= 10) {
              MicroMouseTemplate_DW.bitsForTID0.is_VeerRight =
                MicroMouseTemp_IN_RightReadings;
              MicroMouseTemplate_B.leftWheel_c = 0;
              MicroMouseTemplate_B.rightWheel = 0;
            }
          } else {
            /* case IN_RightReadings: */
            MicroMouseTemplate_B.leftWheel_c = 0;
            MicroMouseTemplate_B.rightWheel = 0;
          }
          break;
        }
      }
      break;

     case MicroMouseTemp_IN_LineFollowing:
      if (rtb_NOT1) {
        MicroMouseTemplate_DW.bitsForTID0.is_LineFollowing =
          MicroMouseTe_IN_NO_ACTIVE_CHILD;
        MicroMouseTemplate_DW.bitsForTID0.is_c2_MicroMouseTemplate =
          MicroMouseTemplate_IN_Stop;
        MicroMouseTemplate_B.LED0 = false;
        MicroMouseTemplate_B.LED_DOWN_L = false;
        MicroMouseTemplate_B.LED_DOWN_R = false;
        MicroMouseTemplate_B.LED_FWD_L = false;
        MicroMouseTemplate_B.LED_FWD_R = false;
        MicroMouseTemplate_B.LED_L = false;
        MicroMouseTemplate_B.LED_R = false;
        MicroMouseTemplate_B.leftWheel_c = 0;
        MicroMouseTemplate_B.rightWheel = 0;
      } else {
        switch (MicroMouseTemplate_DW.bitsForTID0.is_LineFollowing) {
         case MicroMouseTemplate_IN_Forward_c:
          MicroMouseTemplate_B.leftWheel_c = -85;
          MicroMouseTemplate_B.rightWheel = -85;
          if (MicroMouseTemplate_B.Flip[2] > 3900) {
            MicroMouseTemplate_DW.bitsForTID0.is_LineFollowing =
              MicroMouseTemplate_IN_TurnRight;
            MicroMouseTemplate_B.leftWheel_c = -75;
            MicroMouseTemplate_B.rightWheel = 75;
          } else if (MicroMouseTemplate_B.Flip[5] > 3850) {
            MicroMouseTemplate_DW.bitsForTID0.is_LineFollowing =
              MicroMouseTemplate_IN_TurnLeft;
            MicroMouseTemplate_B.leftWheel_c = 75;
            MicroMouseTemplate_B.rightWheel = -75;
          }
          break;

         case MicroMouseTemplate_IN_Stop_p:
          MicroMouseTemplate_B.leftWheel_c = 0;
          MicroMouseTemplate_B.rightWheel = 0;
          break;

         case MicroMouseTemplate_IN_TurnLeft:
          MicroMouseTemplate_B.leftWheel_c = 75;
          MicroMouseTemplate_B.rightWheel = -75;
          if (MicroMouseTemplate_B.Flip[5] < 3800) {
            MicroMouseTemplate_DW.bitsForTID0.is_LineFollowing =
              MicroMouseTemplate_IN_Forward_c;
            MicroMouseTemplate_B.leftWheel_c = -85;
            MicroMouseTemplate_B.rightWheel = -85;
          }
          break;

         default:
          /* case IN_TurnRight: */
          MicroMouseTemplate_B.leftWheel_c = -75;
          MicroMouseTemplate_B.rightWheel = 75;
          if (MicroMouseTemplate_B.Flip[2] < 3600) {
            MicroMouseTemplate_DW.bitsForTID0.is_LineFollowing =
              MicroMouseTemplate_IN_Forward_c;
            MicroMouseTemplate_B.leftWheel_c = -85;
            MicroMouseTemplate_B.rightWheel = -85;
          }
          break;
        }
      }
      break;

     case MicroMouseTemplate_IN_StandBy:
      if (rtb_NOT) {
        MicroMouseTemplate_DW.bitsForTID0.is_c2_MicroMouseTemplate =
          MicroMouseTempla_IN_Calibration;
        MicroMouseTemplate_B.LED0 = false;
        MicroMouseTemplate_B.LED_DOWN_L = true;
        MicroMouseTemplate_B.LED_DOWN_R = true;
        MicroMouseTemplate_B.LED_FWD_L = true;
        MicroMouseTemplate_B.LED_FWD_R = true;
        MicroMouseTemplate_B.LED_L = true;
        MicroMouseTemplate_B.LED_R = true;
        MicroMouseTemplate_DW.temporalCounter_i1 = 0U;
        MicroMouseTemplate_DW.bitsForTID0.is_Calibration =
          MicroMouseTemplate_IN_Forward;
        MicroMouseTemplate_B.LED1 = true;
      } else if (rtb_NOT1) {
        MicroMouseTemplate_DW.bitsForTID0.is_c2_MicroMouseTemplate =
          MicroMouseTemp_IN_LineFollowing;
        MicroMouseTemplate_B.LED0 = true;
        MicroMouseTemplate_DW.bitsForTID0.is_LineFollowing =
          MicroMouseTemplate_IN_Forward_c;
        MicroMouseTemplate_B.leftWheel_c = -85;
        MicroMouseTemplate_B.rightWheel = -85;
      } else {
        MicroMouseTemplate_B.LED0 = !MicroMouseTemplate_B.LED0;
      }
      break;

     default:
      /* case IN_Stop: */
      MicroMouseTemplate_B.LED_DOWN_L = false;
      MicroMouseTemplate_B.LED_DOWN_R = false;
      MicroMouseTemplate_B.LED_FWD_L = false;
      MicroMouseTemplate_B.LED_FWD_R = false;
      MicroMouseTemplate_B.LED_L = false;
      MicroMouseTemplate_B.LED_R = false;
      MicroMouseTemplate_B.leftWheel_c = 0;
      MicroMouseTemplate_B.rightWheel = 0;
      break;
    }
  }

  /* End of Chart: '<Root>/HelloMicroMouse!' */

  /* Outputs for Atomic SubSystem: '<Root>/GPIO for IR LEDs' */
  /* MATLABSystem: '<S19>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (MicroMouseTemplate_B.LED_DOWN_L) {
    i = 512;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 512U);

  /* End of MATLABSystem: '<S19>/Digital Port Write' */

  /* MATLABSystem: '<S21>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (MicroMouseTemplate_B.LED_DOWN_R) {
    i = 16384;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 16384U);

  /* End of MATLABSystem: '<S21>/Digital Port Write' */

  /* MATLABSystem: '<S23>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (MicroMouseTemplate_B.LED_FWD_L) {
    i = 256;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 256U);

  /* End of MATLABSystem: '<S23>/Digital Port Write' */

  /* MATLABSystem: '<S25>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (MicroMouseTemplate_B.LED_FWD_R) {
    i = 32768;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 32768U);

  /* End of MATLABSystem: '<S25>/Digital Port Write' */

  /* MATLABSystem: '<S27>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (MicroMouseTemplate_B.LED_L) {
    i = 4096;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 4096U);

  /* End of MATLABSystem: '<S27>/Digital Port Write' */

  /* MATLABSystem: '<S29>/Digital Port Write' */
  portNameLoc = GPIOB;
  LL_GPIO_SetOutputPin(portNameLoc, 0U);
  LL_GPIO_ResetOutputPin(portNameLoc, 4096U);

  /* MATLABSystem: '<S31>/Digital Port Write' */
  portNameLoc = GPIOE;
  LL_GPIO_SetOutputPin(portNameLoc, 0U);
  LL_GPIO_ResetOutputPin(portNameLoc, 8192U);

  /* MATLABSystem: '<S33>/Digital Port Write' */
  portNameLoc = GPIOE;
  if (MicroMouseTemplate_B.LED_R) {
    i = 2048;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 2048U);

  /* End of MATLABSystem: '<S33>/Digital Port Write' */
  /* End of Outputs for SubSystem: '<Root>/GPIO for IR LEDs' */

  /* If: '<S5>/If1' incorporates:
   *  Abs: '<S5>/Abs1'
   */
  rtPrevAction = MicroMouseTemplate_DW.If1_ActiveSubsystem;
  if (MicroMouseTemplate_B.rightWheel > 0) {
    MicroMouseTemplate_DW.If1_ActiveSubsystem = 0;
  } else {
    MicroMouseTemplate_DW.If1_ActiveSubsystem = 1;
  }

  if (rtPrevAction != MicroMouseTemplate_DW.If1_ActiveSubsystem) {
    switch (rtPrevAction) {
     case 0:
      /* Disable for SignalConversion generated from: '<S39>/leftWheel' incorporates:
       *  Outport: '<S39>/Out1'
       * */
      MicroMouseTemplate_B.leftWheel_d = MicroMouseTemplate_P.Out1_Y0_a;
      break;

     case 1:
      /* Disable for SignalConversion generated from: '<S40>/leftWheel' incorporates:
       *  Outport: '<S40>/Out1'
       * */
      MicroMouseTemplate_B.leftWheel = MicroMouseTemplate_P.Out1_Y0_i;
      break;

     case 2:
      break;
    }
  }

  if (MicroMouseTemplate_DW.If1_ActiveSubsystem == 0) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    /* SignalConversion generated from: '<S39>/leftWheel' */
    MicroMouseTemplate_B.leftWheel_d = MicroMouseTemplate_B.rightWheel;

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem2' */
  } else if (MicroMouseTemplate_B.rightWheel < 0) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    /* Abs: '<S5>/Abs1' incorporates:
     *  SignalConversion generated from: '<S40>/leftWheel'
     */
    MicroMouseTemplate_B.leftWheel = (int16_T)-MicroMouseTemplate_B.rightWheel;

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem3' */
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    /* SignalConversion generated from: '<S40>/leftWheel' incorporates:
     *  Abs: '<S5>/Abs1'
     */
    MicroMouseTemplate_B.leftWheel = MicroMouseTemplate_B.rightWheel;

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem3' */
  }

  /* End of If: '<S5>/If1' */

  /* MATLABSystem: '<S49>/PWM Output' */
  setDutyCycleInPercentageChannel1(MicroMouseTemplate_DW.obj_g.TimerHandle,
    MicroMouseTemplate_B.leftWheel_d);
  setDutyCycleInPercentageChannel2(MicroMouseTemplate_DW.obj_g.TimerHandle,
    MicroMouseTemplate_B.leftWheel);

  /* If: '<S5>/If' incorporates:
   *  Abs: '<S5>/Abs'
   */
  rtPrevAction = MicroMouseTemplate_DW.If_ActiveSubsystem;
  if (MicroMouseTemplate_B.leftWheel_c > 0) {
    MicroMouseTemplate_DW.If_ActiveSubsystem = 0;
  } else {
    MicroMouseTemplate_DW.If_ActiveSubsystem = 1;
  }

  if (rtPrevAction != MicroMouseTemplate_DW.If_ActiveSubsystem) {
    switch (rtPrevAction) {
     case 0:
      /* Disable for SignalConversion generated from: '<S37>/leftWheel' incorporates:
       *  Outport: '<S37>/Out1'
       * */
      MicroMouseTemplate_B.leftWheel_dh2 = MicroMouseTemplate_P.Out1_Y0_n;
      break;

     case 1:
      /* Disable for SignalConversion generated from: '<S38>/leftWheel' incorporates:
       *  Outport: '<S38>/Out1'
       * */
      MicroMouseTemplate_B.leftWheel_dh = MicroMouseTemplate_P.Out1_Y0_oh;
      break;

     case 2:
      break;
    }
  }

  if (MicroMouseTemplate_DW.If_ActiveSubsystem == 0) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    /* SignalConversion generated from: '<S37>/leftWheel' */
    MicroMouseTemplate_B.leftWheel_dh2 = MicroMouseTemplate_B.leftWheel_c;

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem' */
  } else if (MicroMouseTemplate_B.leftWheel_c < 0) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    /* Abs: '<S5>/Abs' incorporates:
     *  SignalConversion generated from: '<S38>/leftWheel'
     */
    MicroMouseTemplate_B.leftWheel_dh = (int16_T)
      -MicroMouseTemplate_B.leftWheel_c;

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    /* SignalConversion generated from: '<S38>/leftWheel' incorporates:
     *  Abs: '<S5>/Abs'
     */
    MicroMouseTemplate_B.leftWheel_dh = MicroMouseTemplate_B.leftWheel_c;

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
  }

  /* End of If: '<S5>/If' */

  /* MATLABSystem: '<S47>/PWM Output' */
  setDutyCycleInPercentageChannel3(MicroMouseTemplate_DW.obj_n.TimerHandle,
    MicroMouseTemplate_B.leftWheel_dh2);
  setDutyCycleInPercentageChannel4(MicroMouseTemplate_DW.obj_n.TimerHandle,
    MicroMouseTemplate_B.leftWheel_dh);

  /* MATLABSystem: '<S45>/Digital Port Write' incorporates:
   *  Constant: '<S5>/Constant'
   */
  portNameLoc = GPIOD;
  if (MicroMouseTemplate_P.Constant_Value != 0.0) {
    i = 128;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 128U);

  /* End of MATLABSystem: '<S45>/Digital Port Write' */

  /* MATLABSystem: '<S64>/Digital Port Write' */
  portNameLoc = GPIOC;
  if (MicroMouseTemplate_B.LED0) {
    i = 8192;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 8192U);

  /* End of MATLABSystem: '<S64>/Digital Port Write' */

  /* MATLABSystem: '<S66>/Digital Port Write' */
  portNameLoc = GPIOC;
  if (MicroMouseTemplate_B.LED1) {
    i = 16384;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 16384U);

  /* End of MATLABSystem: '<S66>/Digital Port Write' */

  /* MATLABSystem: '<S68>/Digital Port Write' */
  portNameLoc = GPIOC;
  if (MicroMouseTemplate_B.LED2) {
    i = 32768;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 32768U);

  /* End of MATLABSystem: '<S68>/Digital Port Write' */

  /* MATLABSystem: '<S62>/Digital Port Write' incorporates:
   *  Constant: '<S8>/Constant'
   */
  portNameLoc = GPIOB;
  if (MicroMouseTemplate_P.Constant_Value_i != 0.0) {
    i = 8;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 8U);

  /* End of MATLABSystem: '<S62>/Digital Port Write' */

  /* Sum: '<S34>/Sum' incorporates:
   *  Constant: '<S34>/Constant'
   *  UnitDelay: '<S34>/Unit Delay'
   */
  MicroMouseTemplate_DW.UnitDelay_DSTATE = MicroMouseTemplate_P.Constant_Value_o
    - MicroMouseTemplate_DW.UnitDelay_DSTATE;

  /* user code (Update function Body) */

  /* System '<Root>' */
  refreshIMUValues();

  /* System '<Root>' */
  CustomWhile();
}

/* Model initialize function */
void MicroMouseTemplate_initialize(void)
{
  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
      Detections[i] = MicroMouseTemplate_P.DataStoreMemory_InitialValue_p4;

      /* Start for DataStoreMemory: '<S1>/Data Store Memory1' */
      Thresholds[i] = MicroMouseTemplate_P.DataStoreMemory1_InitialValue_j;
    }

    /* Start for DataStoreMemory: '<S1>/Data Store Memory2' */
    currTicksRS = MicroMouseTemplate_P.DataStoreMemory2_InitialValue;

    /* Start for DataStoreMemory: '<S1>/Data Store Memory4' */
    currTicksLS = MicroMouseTemplate_P.DataStoreMemory4_InitialValue;
    for (i = 0; i < 9; i++) {
      /* Start for DataStoreMemory: '<S6>/Data Store Memory' */
      ADC1s[i] = MicroMouseTemplate_P.DataStoreMemory_InitialValue_p;

      /* Start for DataStoreMemory: '<S6>/Data Store Memory1' */
      ADC_H[i] = MicroMouseTemplate_P.DataStoreMemory1_InitialValue_p;

      /* Start for DataStoreMemory: '<S6>/Data Store Memory2' */
      ADC_L[i] = MicroMouseTemplate_P.DataStoreMemory2_InitialValue_p;
    }

    /* Start for If: '<S5>/If1' */
    MicroMouseTemplate_DW.If1_ActiveSubsystem = -1;

    /* Start for If: '<S5>/If' */
    MicroMouseTemplate_DW.If_ActiveSubsystem = -1;

    /* Start for DataStoreMemory: '<S7>/Data Store Memory' */
    IMU_Accel[0] = MicroMouseTemplate_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<S7>/Data Store Memory1' */
    IMU_Gyro[0] = MicroMouseTemplate_P.DataStoreMemory1_InitialValue;

    /* Start for DataStoreMemory: '<S7>/Data Store Memory' */
    IMU_Accel[1] = MicroMouseTemplate_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<S7>/Data Store Memory1' */
    IMU_Gyro[1] = MicroMouseTemplate_P.DataStoreMemory1_InitialValue;

    /* Start for DataStoreMemory: '<S7>/Data Store Memory' */
    IMU_Accel[2] = MicroMouseTemplate_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<S7>/Data Store Memory1' */
    IMU_Gyro[2] = MicroMouseTemplate_P.DataStoreMemory1_InitialValue;

    /* user code (Initialize function Body) */

    /* System '<Root>' */
    initIMU();

    /* InitializeConditions for UnitDelay: '<S34>/Unit Delay' */
    MicroMouseTemplate_DW.UnitDelay_DSTATE =
      MicroMouseTemplate_P.UnitDelay_InitialCondition;

    /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem2' */
    /* SystemInitialize for SignalConversion generated from: '<S39>/leftWheel' incorporates:
     *  Outport: '<S39>/Out1'
     */
    MicroMouseTemplate_B.leftWheel_d = MicroMouseTemplate_P.Out1_Y0_a;

    /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem2' */

    /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem3' */
    /* SystemInitialize for SignalConversion generated from: '<S40>/leftWheel' incorporates:
     *  Outport: '<S40>/Out1'
     */
    MicroMouseTemplate_B.leftWheel = MicroMouseTemplate_P.Out1_Y0_i;

    /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem3' */

    /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S37>/leftWheel' incorporates:
     *  Outport: '<S37>/Out1'
     */
    MicroMouseTemplate_B.leftWheel_dh2 = MicroMouseTemplate_P.Out1_Y0_n;

    /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem' */

    /* SystemInitialize for IfAction SubSystem: '<S5>/If Action Subsystem1' */
    /* SystemInitialize for SignalConversion generated from: '<S38>/leftWheel' incorporates:
     *  Outport: '<S38>/Out1'
     */
    MicroMouseTemplate_B.leftWheel_dh = MicroMouseTemplate_P.Out1_Y0_oh;

    /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem1' */

    /* Start for MATLABSystem: '<S53>/Analog to Digital Converter' */
    MicroMouseTemplate_DW.obj.isInitialized = 0;
    MicroMouseTemplate_DW.obj.matlabCodegenIsDeleted = false;
    MicroMouseTemp_SystemCore_setup(&MicroMouseTemplate_DW.obj);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem2_ci,
      &MicroMouseTemplate_P.MATLABSystem2_ci);
    MicroMouseTe_MATLABSystem3_Init(&MicroMouseTemplate_DW.MATLABSystem4,
      &MicroMouseTemplate_P.MATLABSystem4);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem1,
      &MicroMouseTemplate_P.MATLABSystem1);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem1_ci,
      &MicroMouseTemplate_P.MATLABSystem1_ci);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem3_c,
      &MicroMouseTemplate_P.MATLABSystem3_c);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem4_c,
      &MicroMouseTemplate_P.MATLABSystem4_c);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem5,
      &MicroMouseTemplate_P.MATLABSystem5);
    MicroMouseTe_MATLABSystem3_Init(&MicroMouseTemplate_DW.MATLABSystem3,
      &MicroMouseTemplate_P.MATLABSystem3);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem2,
      &MicroMouseTemplate_P.MATLABSystem2);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem6,
      &MicroMouseTemplate_P.MATLABSystem6);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem1_c,
      &MicroMouseTemplate_P.MATLABSystem1_c);
    MicroMouseTe_MATLABSystem1_Init(&MicroMouseTemplate_DW.MATLABSystem2_c,
      &MicroMouseTemplate_P.MATLABSystem2_c);

    /* Start for MATLABSystem: '<S49>/PWM Output' */
    MicroMouseTemplate_DW.obj_g.matlabCodegenIsDeleted = false;
    MicroMouseTemplate_DW.obj_g.isSetupComplete = false;
    MicroMouseTemplate_DW.obj_g.isInitialized = 1;
    MicroMous_PWMOutput_setupImpl_d(&MicroMouseTemplate_DW.obj_g);
    MicroMouseTemplate_DW.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<S47>/PWM Output' */
    MicroMouseTemplate_DW.obj_n.matlabCodegenIsDeleted = false;
    MicroMouseTemplate_DW.obj_n.isSetupComplete = false;
    MicroMouseTemplate_DW.obj_n.isInitialized = 1;
    MicroMouseT_PWMOutput_setupImpl(&MicroMouseTemplate_DW.obj_n);
    MicroMouseTemplate_DW.obj_n.isSetupComplete = true;
  }
}

/* Model terminate function */
void MicroMouseTemplate_terminate(void)
{
  /* Terminate for MATLABSystem: '<S53>/Analog to Digital Converter' */
  if (!MicroMouseTemplate_DW.obj.matlabCodegenIsDeleted) {
    MicroMouseTemplate_DW.obj.matlabCodegenIsDeleted = true;
    if ((MicroMouseTemplate_DW.obj.isInitialized == 1) &&
        MicroMouseTemplate_DW.obj.isSetupComplete) {
      ADC_Handle_Deinit(MicroMouseTemplate_DW.obj.ADCHandle,
                        ADC_DMA_INTERRUPT_MODE, 1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S53>/Analog to Digital Converter' */

  /* Terminate for MATLABSystem: '<S49>/PWM Output' */
  if (!MicroMouseTemplate_DW.obj_g.matlabCodegenIsDeleted) {
    MicroMouseTemplate_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((MicroMouseTemplate_DW.obj_g.isInitialized == 1) &&
        MicroMouseTemplate_DW.obj_g.isSetupComplete) {
      disableCounter(MicroMouseTemplate_DW.obj_g.TimerHandle);
      disableTimerInterrupts(MicroMouseTemplate_DW.obj_g.TimerHandle, 0);
      disableTimerChannel1(MicroMouseTemplate_DW.obj_g.TimerHandle, ENABLE_CH);
      disableTimerChannel2(MicroMouseTemplate_DW.obj_g.TimerHandle, ENABLE_CH);
    }
  }

  /* End of Terminate for MATLABSystem: '<S49>/PWM Output' */

  /* Terminate for MATLABSystem: '<S47>/PWM Output' */
  if (!MicroMouseTemplate_DW.obj_n.matlabCodegenIsDeleted) {
    MicroMouseTemplate_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((MicroMouseTemplate_DW.obj_n.isInitialized == 1) &&
        MicroMouseTemplate_DW.obj_n.isSetupComplete) {
      disableCounter(MicroMouseTemplate_DW.obj_n.TimerHandle);
      disableTimerInterrupts(MicroMouseTemplate_DW.obj_n.TimerHandle, 0);
      disableTimerChannel3(MicroMouseTemplate_DW.obj_n.TimerHandle, ENABLE_CH);
      disableTimerChannel4(MicroMouseTemplate_DW.obj_n.TimerHandle, ENABLE_CH);
    }
  }

  /* End of Terminate for MATLABSystem: '<S47>/PWM Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
