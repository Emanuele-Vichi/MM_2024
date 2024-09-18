/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MicroMouseTemplate.h
 *
 * Code generated for Simulink model 'MicroMouseTemplate'.
 *
 * Model version                  : 4.14
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Sep 19 00:54:22 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MicroMouseTemplate_h_
#define MicroMouseTemplate_h_
#ifndef MicroMouseTemplate_COMMON_INCLUDES_
#define MicroMouseTemplate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "main.h"
#endif                                 /* MicroMouseTemplate_COMMON_INCLUDES_ */

#include "MicroMouseTemplate_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* user code (top of header file) */
#include "MicroMouseProgramming\Core\Inc\IMU.h"
#include "MicroMouseProgramming\Core\Inc\CustomWhile.h"
#include "MicroMouseProgramming\Core\Inc\Motors.h"

/* Block signals for system '<S54>/MATLAB System1' */
typedef struct {
  real_T MATLABSystem1[25];            /* '<S54>/MATLAB System1' */
} B_MATLABSystem1_MicroMouseTem_T;

/* Block states (default storage) for system '<S54>/MATLAB System1' */
typedef struct {
  CircularBuffer_MicroMouseTemp_T obj; /* '<S54>/MATLAB System1' */
  boolean_T objisempty;                /* '<S54>/MATLAB System1' */
} DW_MATLABSystem1_MicroMouseTe_T;

/* Block signals for system '<S54>/MATLAB System3' */
typedef struct {
  real_T MATLABSystem3[10];            /* '<S54>/MATLAB System3' */
} B_MATLABSystem3_MicroMouseTem_T;

/* Block states (default storage) for system '<S54>/MATLAB System3' */
typedef struct {
  CircularBuffer_MicroMouseTe_p_T obj; /* '<S54>/MATLAB System3' */
  boolean_T objisempty;                /* '<S54>/MATLAB System3' */
} DW_MATLABSystem3_MicroMouseTe_T;

/* Block signals (default storage) */
typedef struct {
  uint16_T Flip[8];                    /* '<S6>/Flip' */
  int16_T leftWheel;                   /* '<S40>/leftWheel' */
  int16_T leftWheel_d;                 /* '<S39>/leftWheel' */
  int16_T leftWheel_dh;                /* '<S38>/leftWheel' */
  int16_T leftWheel_dh2;               /* '<S37>/leftWheel' */
  int16_T leftWheel_c;                 /* '<Root>/HelloMicroMouse!' */
  int16_T rightWheel;                  /* '<Root>/HelloMicroMouse!' */
  boolean_T LED0;                      /* '<Root>/HelloMicroMouse!' */
  boolean_T LED_DOWN_L;                /* '<Root>/HelloMicroMouse!' */
  boolean_T LED_DOWN_R;                /* '<Root>/HelloMicroMouse!' */
  boolean_T LED_FWD_L;                 /* '<Root>/HelloMicroMouse!' */
  boolean_T LED_FWD_R;                 /* '<Root>/HelloMicroMouse!' */
  boolean_T LED_L;                     /* '<Root>/HelloMicroMouse!' */
  boolean_T LED_R;                     /* '<Root>/HelloMicroMouse!' */
  boolean_T LED1;                      /* '<Root>/HelloMicroMouse!' */
  boolean_T LED2;                      /* '<Root>/HelloMicroMouse!' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem6;/* '<S54>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem5;/* '<S54>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem4_c;/* '<S54>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem3_c;/* '<S54>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem2_ci;/* '<S54>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem1_ci;/* '<S54>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem2_c;/* '<S54>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem1_c;/* '<S54>/MATLAB System1' */
  B_MATLABSystem3_MicroMouseTem_T MATLABSystem4;/* '<S54>/MATLAB System3' */
  B_MATLABSystem3_MicroMouseTem_T MATLABSystem3;/* '<S54>/MATLAB System3' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem2;/* '<S54>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem1;/* '<S54>/MATLAB System1' */
} B_MicroMouseTemplate_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_AnalogInput__T obj; /* '<S53>/Analog to Digital Converter' */
  stm32cube_blocks_PWMOutput_Mi_T obj_g;/* '<S49>/PWM Output' */
  stm32cube_blocks_PWMOutput_Mi_T obj_n;/* '<S47>/PWM Output' */
  real_T UnitDelay_DSTATE;             /* '<S34>/Unit Delay' */
  struct {
    uint_T is_c2_MicroMouseTemplate:3; /* '<Root>/HelloMicroMouse!' */
    uint_T is_Calibration:3;           /* '<Root>/HelloMicroMouse!' */
    uint_T is_LineFollowing:3;         /* '<Root>/HelloMicroMouse!' */
    uint_T is_EndCalibration:2;        /* '<Root>/HelloMicroMouse!' */
    uint_T is_VeerLeft:2;              /* '<Root>/HelloMicroMouse!' */
    uint_T is_VeerRight:2;             /* '<Root>/HelloMicroMouse!' */
    uint_T is_Stop:2;                  /* '<Root>/HelloMicroMouse!' */
    uint_T is_active_c2_MicroMouseTemplate:1;/* '<Root>/HelloMicroMouse!' */
  } bitsForTID0;

  uint16_T temporalCounter_i1;         /* '<Root>/HelloMicroMouse!' */
  int8_T If1_ActiveSubsystem;          /* '<S5>/If1' */
  int8_T If_ActiveSubsystem;           /* '<S5>/If' */
  uint8_T temporalCounter_i2;          /* '<Root>/HelloMicroMouse!' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem6;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem5;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem4_c;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem3_c;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem2_ci;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem1_ci;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem2_c;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem1_c;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem3_MicroMouseTe_T MATLABSystem4;/* '<S54>/MATLAB System3' */
  DW_MATLABSystem3_MicroMouseTe_T MATLABSystem3;/* '<S54>/MATLAB System3' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem2;/* '<S54>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem1;/* '<S54>/MATLAB System1' */
} DW_MicroMouseTemplate_T;

/* Parameters for system: '<S54>/MATLAB System1' */
struct P_MATLABSystem1_MicroMouseTem_T_ {
  real_T MATLABSystem1_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S54>/MATLAB System1'
                                         */
};

/* Parameters for system: '<S54>/MATLAB System3' */
struct P_MATLABSystem3_MicroMouseTem_T_ {
  real_T MATLABSystem3_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S54>/MATLAB System3'
                                         */
};

/* Parameters (default storage) */
struct P_MicroMouseTemplate_T_ {
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S35>/Out1'
                                        */
  real_T Out1_Y0_o;                    /* Expression: 0
                                        * Referenced by: '<S36>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 1
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S34>/Unit Delay'
                                        */
  int32_T DataStoreMemory2_InitialValue;
                            /* Computed Parameter: DataStoreMemory2_InitialValue
                             * Referenced by: '<S1>/Data Store Memory2'
                             */
  int32_T DataStoreMemory4_InitialValue;
                            /* Computed Parameter: DataStoreMemory4_InitialValue
                             * Referenced by: '<S1>/Data Store Memory4'
                             */
  real32_T DataStoreMemory_InitialValue;
                             /* Computed Parameter: DataStoreMemory_InitialValue
                              * Referenced by: '<S7>/Data Store Memory'
                              */
  real32_T DataStoreMemory1_InitialValue;
                            /* Computed Parameter: DataStoreMemory1_InitialValue
                             * Referenced by: '<S7>/Data Store Memory1'
                             */
  int16_T Out1_Y0_n;                   /* Computed Parameter: Out1_Y0_n
                                        * Referenced by: '<S37>/Out1'
                                        */
  int16_T Out1_Y0_oh;                  /* Computed Parameter: Out1_Y0_oh
                                        * Referenced by: '<S38>/Out1'
                                        */
  int16_T Out1_Y0_a;                   /* Computed Parameter: Out1_Y0_a
                                        * Referenced by: '<S39>/Out1'
                                        */
  int16_T Out1_Y0_i;                   /* Computed Parameter: Out1_Y0_i
                                        * Referenced by: '<S40>/Out1'
                                        */
  uint16_T DataStoreMemory1_InitialValue_j;
                          /* Computed Parameter: DataStoreMemory1_InitialValue_j
                           * Referenced by: '<S1>/Data Store Memory1'
                           */
  uint16_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S51>/Constant'
                                        */
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S51>/Constant1'
                                        */
  uint16_T DataStoreMemory_InitialValue_p;
                           /* Computed Parameter: DataStoreMemory_InitialValue_p
                            * Referenced by: '<S6>/Data Store Memory'
                            */
  uint16_T DataStoreMemory1_InitialValue_p;
                          /* Computed Parameter: DataStoreMemory1_InitialValue_p
                           * Referenced by: '<S6>/Data Store Memory1'
                           */
  uint16_T DataStoreMemory2_InitialValue_p;
                          /* Computed Parameter: DataStoreMemory2_InitialValue_p
                           * Referenced by: '<S6>/Data Store Memory2'
                           */
  boolean_T DataStoreMemory_InitialValue_p4;
                          /* Computed Parameter: DataStoreMemory_InitialValue_p4
                           * Referenced by: '<S1>/Data Store Memory'
                           */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem6;/* '<S54>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem5;/* '<S54>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem4_c;/* '<S54>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem3_c;/* '<S54>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem2_ci;/* '<S54>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem1_ci;/* '<S54>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem2_c;/* '<S54>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem1_c;/* '<S54>/MATLAB System1' */
  P_MATLABSystem3_MicroMouseTem_T MATLABSystem4;/* '<S54>/MATLAB System3' */
  P_MATLABSystem3_MicroMouseTem_T MATLABSystem3;/* '<S54>/MATLAB System3' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem2;/* '<S54>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem1;/* '<S54>/MATLAB System1' */
};

/* Code_Instrumentation_Declarations_Placeholder */

/* Real-time Model Data Structure */
struct tag_RTM_MicroMouseTemplate_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_MicroMouseTemplate_T MicroMouseTemplate_P;

/* Block signals (default storage) */
extern B_MicroMouseTemplate_T MicroMouseTemplate_B;

/* Block states (default storage) */
extern DW_MicroMouseTemplate_T MicroMouseTemplate_DW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern real32_T IMU_Accel[3];          /* '<S7>/Data Store Memory' */
extern real32_T IMU_Gyro[3];           /* '<S7>/Data Store Memory1' */
extern int32_T currTicksRS;            /* '<S1>/Data Store Memory2' */
extern int32_T currTicksLS;            /* '<S1>/Data Store Memory4' */
extern uint16_T Thresholds[8];         /* '<S1>/Data Store Memory1' */
extern uint16_T ADC1s[9];              /* '<S6>/Data Store Memory' */
extern uint16_T ADC_H[9];              /* '<S6>/Data Store Memory1' */
extern uint16_T ADC_L[9];              /* '<S6>/Data Store Memory2' */
extern boolean_T Detections[8];        /* '<S1>/Data Store Memory' */

/* Model entry point functions */
extern void MicroMouseTemplate_initialize(void);
extern void MicroMouseTemplate_step(void);
extern void MicroMouseTemplate_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MicroMouseTemplate_T *const MicroMouseTemplate_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S51>/Cast1' : Eliminate redundant data type conversion
 * Block '<S51>/Cast3' : Eliminate redundant data type conversion
 * Block '<S56>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S56>/Rate Transition1' : Eliminated since input and output rates are identical
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
 * '<Root>' : 'MicroMouseTemplate'
 * '<S1>'   : 'MicroMouseTemplate/Detections and Thresholds'
 * '<S2>'   : 'MicroMouseTemplate/GPIO for IR LEDs'
 * '<S3>'   : 'MicroMouseTemplate/HelloMicroMouse!'
 * '<S4>'   : 'MicroMouseTemplate/IR LED Pattern'
 * '<S5>'   : 'MicroMouseTemplate/Motors'
 * '<S6>'   : 'MicroMouseTemplate/Subsystem'
 * '<S7>'   : 'MicroMouseTemplate/Subsystem1'
 * '<S8>'   : 'MicroMouseTemplate/Subsystem2'
 * '<S9>'   : 'MicroMouseTemplate/Subsystem3'
 * '<S10>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_DOWN_LEFT'
 * '<S11>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_DOWN_RIGHT'
 * '<S12>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_FWD_LEFT'
 * '<S13>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_FWD_RIGHT'
 * '<S14>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_LEFT'
 * '<S15>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_MOT_LEFT'
 * '<S16>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_MOT_RIGHT'
 * '<S17>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_RIGHT'
 * '<S18>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_DOWN_LEFT/ECSoC'
 * '<S19>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_DOWN_LEFT/ECSoC/ECSimCodegen'
 * '<S20>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_DOWN_RIGHT/ECSoC'
 * '<S21>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_DOWN_RIGHT/ECSoC/ECSimCodegen'
 * '<S22>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_FWD_LEFT/ECSoC'
 * '<S23>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_FWD_LEFT/ECSoC/ECSimCodegen'
 * '<S24>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_FWD_RIGHT/ECSoC'
 * '<S25>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_FWD_RIGHT/ECSoC/ECSimCodegen'
 * '<S26>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_LEFT/ECSoC'
 * '<S27>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_LEFT/ECSoC/ECSimCodegen'
 * '<S28>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_MOT_LEFT/ECSoC'
 * '<S29>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_MOT_LEFT/ECSoC/ECSimCodegen'
 * '<S30>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_MOT_RIGHT/ECSoC'
 * '<S31>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_MOT_RIGHT/ECSoC/ECSimCodegen'
 * '<S32>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_RIGHT/ECSoC'
 * '<S33>'  : 'MicroMouseTemplate/GPIO for IR LEDs/LED_RIGHT/ECSoC/ECSimCodegen'
 * '<S34>'  : 'MicroMouseTemplate/IR LED Pattern/Clock'
 * '<S35>'  : 'MicroMouseTemplate/IR LED Pattern/If Action Subsystem'
 * '<S36>'  : 'MicroMouseTemplate/IR LED Pattern/If Action Subsystem1'
 * '<S37>'  : 'MicroMouseTemplate/Motors/If Action Subsystem'
 * '<S38>'  : 'MicroMouseTemplate/Motors/If Action Subsystem1'
 * '<S39>'  : 'MicroMouseTemplate/Motors/If Action Subsystem2'
 * '<S40>'  : 'MicroMouseTemplate/Motors/If Action Subsystem3'
 * '<S41>'  : 'MicroMouseTemplate/Motors/MOTOR_EN'
 * '<S42>'  : 'MicroMouseTemplate/Motors/PWM Output'
 * '<S43>'  : 'MicroMouseTemplate/Motors/PWM Output1'
 * '<S44>'  : 'MicroMouseTemplate/Motors/MOTOR_EN/ECSoC'
 * '<S45>'  : 'MicroMouseTemplate/Motors/MOTOR_EN/ECSoC/ECSimCodegen'
 * '<S46>'  : 'MicroMouseTemplate/Motors/PWM Output/ECSoC'
 * '<S47>'  : 'MicroMouseTemplate/Motors/PWM Output/ECSoC/ECSimCodegen'
 * '<S48>'  : 'MicroMouseTemplate/Motors/PWM Output1/ECSoC'
 * '<S49>'  : 'MicroMouseTemplate/Motors/PWM Output1/ECSoC/ECSimCodegen'
 * '<S50>'  : 'MicroMouseTemplate/Subsystem/ADC2 IN10  IN1'
 * '<S51>'  : 'MicroMouseTemplate/Subsystem/get Highs and Lows'
 * '<S52>'  : 'MicroMouseTemplate/Subsystem/ADC2 IN10  IN1/ECSoC'
 * '<S53>'  : 'MicroMouseTemplate/Subsystem/ADC2 IN10  IN1/ECSoC/ECSimCodegen'
 * '<S54>'  : 'MicroMouseTemplate/Subsystem/get Highs and Lows/Subsystem'
 * '<S55>'  : 'MicroMouseTemplate/Subsystem/get Highs and Lows/Subsystem1'
 * '<S56>'  : 'MicroMouseTemplate/Subsystem/get Highs and Lows/Subsystem2'
 * '<S57>'  : 'MicroMouseTemplate/Subsystem2/CTRL_LEDs'
 * '<S58>'  : 'MicroMouseTemplate/Subsystem2/LED_0'
 * '<S59>'  : 'MicroMouseTemplate/Subsystem2/LED_1'
 * '<S60>'  : 'MicroMouseTemplate/Subsystem2/LED_2'
 * '<S61>'  : 'MicroMouseTemplate/Subsystem2/CTRL_LEDs/ECSoC'
 * '<S62>'  : 'MicroMouseTemplate/Subsystem2/CTRL_LEDs/ECSoC/ECSimCodegen'
 * '<S63>'  : 'MicroMouseTemplate/Subsystem2/LED_0/ECSoC'
 * '<S64>'  : 'MicroMouseTemplate/Subsystem2/LED_0/ECSoC/ECSimCodegen'
 * '<S65>'  : 'MicroMouseTemplate/Subsystem2/LED_1/ECSoC'
 * '<S66>'  : 'MicroMouseTemplate/Subsystem2/LED_1/ECSoC/ECSimCodegen'
 * '<S67>'  : 'MicroMouseTemplate/Subsystem2/LED_2/ECSoC'
 * '<S68>'  : 'MicroMouseTemplate/Subsystem2/LED_2/ECSoC/ECSimCodegen'
 * '<S69>'  : 'MicroMouseTemplate/Subsystem3/SW_1'
 * '<S70>'  : 'MicroMouseTemplate/Subsystem3/SW_2'
 * '<S71>'  : 'MicroMouseTemplate/Subsystem3/SW_1/ECSoC'
 * '<S72>'  : 'MicroMouseTemplate/Subsystem3/SW_1/ECSoC/ECSimCodegen'
 * '<S73>'  : 'MicroMouseTemplate/Subsystem3/SW_2/ECSoC'
 * '<S74>'  : 'MicroMouseTemplate/Subsystem3/SW_2/ECSoC/ECSimCodegen'
 */
#endif                                 /* MicroMouseTemplate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
