/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MicroMouseTemplate.h
 *
 * Code generated for Simulink model 'MicroMouseTemplate'.
 *
 * Model version                  : 4.27
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Oct  2 16:54:31 2024
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

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* user code (top of header file) */
#include "MicroMouseProgramming\Core\Inc\IMU.h"
#include "MicroMouseProgramming\Core\Inc\CustomWhile.h"
#include "MicroMouseProgramming\Core\Inc\Motors.h"

/* Block signals for system '<S60>/MATLAB System1' */
typedef struct {
  real_T MATLABSystem1[25];            /* '<S60>/MATLAB System1' */
} B_MATLABSystem1_MicroMouseTem_T;

/* Block states (default storage) for system '<S60>/MATLAB System1' */
typedef struct {
  CircularBuffer_MicroMouseTemp_T obj; /* '<S60>/MATLAB System1' */
  boolean_T objisempty;                /* '<S60>/MATLAB System1' */
} DW_MATLABSystem1_MicroMouseTe_T;

/* Block signals for system '<S60>/MATLAB System3' */
typedef struct {
  real_T MATLABSystem3[10];            /* '<S60>/MATLAB System3' */
} B_MATLABSystem3_MicroMouseTem_T;

/* Block states (default storage) for system '<S60>/MATLAB System3' */
typedef struct {
  CircularBuffer_MicroMouseTe_p_T obj; /* '<S60>/MATLAB System3' */
  boolean_T objisempty;                /* '<S60>/MATLAB System3' */
} DW_MATLABSystem3_MicroMouseTe_T;

/* Block signals for system '<S62>/MATLAB System2' */
typedef struct {
  real_T MATLABSystem2[25];            /* '<S62>/MATLAB System2' */
} B_MATLABSystem2_MicroMouseTem_T;

/* Block states (default storage) for system '<S62>/MATLAB System2' */
typedef struct {
  CircularBuffer_MicroMouseTemp_T obj; /* '<S62>/MATLAB System2' */
  boolean_T objisempty;                /* '<S62>/MATLAB System2' */
} DW_MATLABSystem2_MicroMouseTe_T;

/* Block signals (default storage) */
typedef struct {
  real_T In1;                          /* '<S42>/In1' */
  real_T In1_p;                        /* '<S35>/In1' */
  real_T In1_p1;                       /* '<S39>/In1' */
  real_T In1_p1q;                      /* '<S38>/In1' */
  real_T In1_p1qj;                     /* '<S41>/In1' */
  real_T In1_p1qjd;                    /* '<S36>/In1' */
  real_T LED_DOWN_R;                   /* '<S40>/LED_DOWN_R' */
  real_T LED_DOWN_L;                   /* '<S37>/LED_DOWN_L' */
  real_T LED_DOWN_L_g;                 /* '<Root>/HelloMicroMouse!' */
  real_T LED_DOWN_R_k;                 /* '<Root>/HelloMicroMouse!' */
  real_T LED_FWD_L;                    /* '<Root>/HelloMicroMouse!' */
  real_T LED_FWD_R;                    /* '<Root>/HelloMicroMouse!' */
  real_T LED_L;                        /* '<Root>/HelloMicroMouse!' */
  real_T LED_R;                        /* '<Root>/HelloMicroMouse!' */
  real_T LED_CROSS_L;                  /* '<Root>/HelloMicroMouse!' */
  real_T LED_CROSS_R;                  /* '<Root>/HelloMicroMouse!' */
  uint16_T Flip[8];                    /* '<S6>/Flip' */
  int16_T leftWheel;                   /* '<S46>/leftWheel' */
  int16_T leftWheel_d;                 /* '<S45>/leftWheel' */
  int16_T leftWheel_dh;                /* '<S44>/leftWheel' */
  int16_T leftWheel_dh2;               /* '<S43>/leftWheel' */
  int16_T leftWheel_c;                 /* '<Root>/HelloMicroMouse!' */
  int16_T rightWheel;                  /* '<Root>/HelloMicroMouse!' */
  boolean_T LED0;                      /* '<Root>/HelloMicroMouse!' */
  boolean_T LED1;                      /* '<Root>/HelloMicroMouse!' */
  boolean_T LED2;                      /* '<Root>/HelloMicroMouse!' */
  B_MATLABSystem2_MicroMouseTem_T MATLABSystem6;/* '<S62>/MATLAB System2' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem5;/* '<S60>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem4_c;/* '<S60>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem3_c;/* '<S60>/MATLAB System1' */
  B_MATLABSystem2_MicroMouseTem_T MATLABSystem2_ci;/* '<S62>/MATLAB System2' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem1_ci;/* '<S60>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem2_c;/* '<S60>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem1_c;/* '<S60>/MATLAB System1' */
  B_MATLABSystem3_MicroMouseTem_T MATLABSystem4;/* '<S60>/MATLAB System3' */
  B_MATLABSystem3_MicroMouseTem_T MATLABSystem3;/* '<S60>/MATLAB System3' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem2;/* '<S60>/MATLAB System1' */
  B_MATLABSystem1_MicroMouseTem_T MATLABSystem1;/* '<S60>/MATLAB System1' */
} B_MicroMouseTemplate_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_AnalogInput__T obj; /* '<S59>/Analog to Digital Converter' */
  stm32cube_blocks_PWMOutput_Mi_T obj_g;/* '<S55>/PWM Output' */
  stm32cube_blocks_PWMOutput_Mi_T obj_n;/* '<S53>/PWM Output' */
  real_T UnitDelay_DSTATE;             /* '<S34>/Unit Delay' */
  real_T RateTransition_Buffer;        /* '<S62>/Rate Transition' */
  real_T RateTransition1_Buffer;       /* '<S62>/Rate Transition1' */
  struct {
    uint_T is_c2_MicroMouseTemplate:3; /* '<Root>/HelloMicroMouse!' */
    uint_T is_LineFollowing:3;         /* '<Root>/HelloMicroMouse!' */
    uint_T is_Stop:2;                  /* '<Root>/HelloMicroMouse!' */
    uint_T is_active_c2_MicroMouseTemplate:1;/* '<Root>/HelloMicroMouse!' */
  } bitsForTID0;

  volatile uint16_T TmpRTBAtMaxofElementsOutport1_B;/* synthesized block */
  volatile uint16_T TmpRTBAtMaxofElements7Outport1_;/* synthesized block */
  volatile uint16_T TmpRTBAtMaxofElements8Outport1_;/* synthesized block */
  volatile uint16_T TmpRTBAtMaxofElements15Outport1;/* synthesized block */
  uint16_T temporalCounter_i1;         /* '<Root>/HelloMicroMouse!' */
  int8_T If1_ActiveSubsystem;          /* '<S5>/If1' */
  int8_T If_ActiveSubsystem;           /* '<S5>/If' */
  DW_MATLABSystem2_MicroMouseTe_T MATLABSystem6;/* '<S62>/MATLAB System2' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem5;/* '<S60>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem4_c;/* '<S60>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem3_c;/* '<S60>/MATLAB System1' */
  DW_MATLABSystem2_MicroMouseTe_T MATLABSystem2_ci;/* '<S62>/MATLAB System2' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem1_ci;/* '<S60>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem2_c;/* '<S60>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem1_c;/* '<S60>/MATLAB System1' */
  DW_MATLABSystem3_MicroMouseTe_T MATLABSystem4;/* '<S60>/MATLAB System3' */
  DW_MATLABSystem3_MicroMouseTe_T MATLABSystem3;/* '<S60>/MATLAB System3' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem2;/* '<S60>/MATLAB System1' */
  DW_MATLABSystem1_MicroMouseTe_T MATLABSystem1;/* '<S60>/MATLAB System1' */
} DW_MicroMouseTemplate_T;

/* Parameters for system: '<S60>/MATLAB System1' */
struct P_MATLABSystem1_MicroMouseTem_T_ {
  real_T MATLABSystem1_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S60>/MATLAB System1'
                                         */
};

/* Parameters for system: '<S60>/MATLAB System3' */
struct P_MATLABSystem3_MicroMouseTem_T_ {
  real_T MATLABSystem3_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S60>/MATLAB System3'
                                         */
};

/* Parameters for system: '<S62>/MATLAB System2' */
struct P_MATLABSystem2_MicroMouseTem_T_ {
  real_T MATLABSystem2_InitialCondition;/* Expression: 0
                                         * Referenced by: '<S62>/MATLAB System2'
                                         */
};

/* Parameters (default storage) */
struct P_MicroMouseTemplate_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S37>/Out1'
                                        */
  real_T Out1_Y0_g;                    /* Computed Parameter: Out1_Y0_g
                                        * Referenced by: '<S40>/Out1'
                                        */
  real_T Out1_Y0_e;                    /* Computed Parameter: Out1_Y0_e
                                        * Referenced by: '<S36>/Out1'
                                        */
  real_T Out1_Y0_d;                    /* Computed Parameter: Out1_Y0_d
                                        * Referenced by: '<S41>/Out1'
                                        */
  real_T Out1_Y0_j;                    /* Computed Parameter: Out1_Y0_j
                                        * Referenced by: '<S38>/Out1'
                                        */
  real_T Out1_Y0_f;                    /* Computed Parameter: Out1_Y0_f
                                        * Referenced by: '<S39>/Out1'
                                        */
  real_T Out1_Y0_a;                    /* Computed Parameter: Out1_Y0_a
                                        * Referenced by: '<S35>/Out1'
                                        */
  real_T Out1_Y0_b;                    /* Computed Parameter: Out1_Y0_b
                                        * Referenced by: '<S42>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S34>/Unit Delay'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S8>/Constant'
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
                                        * Referenced by: '<S43>/Out1'
                                        */
  int16_T Out1_Y0_o;                   /* Computed Parameter: Out1_Y0_o
                                        * Referenced by: '<S44>/Out1'
                                        */
  int16_T Out1_Y0_ai;                  /* Computed Parameter: Out1_Y0_ai
                                        * Referenced by: '<S45>/Out1'
                                        */
  int16_T Out1_Y0_i;                   /* Computed Parameter: Out1_Y0_i
                                        * Referenced by: '<S46>/Out1'
                                        */
  uint16_T TmpRTBAtMaxofElementsOutport1_I;
                          /* Computed Parameter: TmpRTBAtMaxofElementsOutport1_I
                           * Referenced by:
                           */
  uint16_T TmpRTBAtMaxofElements7Outport1_;
                          /* Computed Parameter: TmpRTBAtMaxofElements7Outport1_
                           * Referenced by:
                           */
  uint16_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S57>/Constant'
                                        */
  uint16_T TmpRTBAtMaxofElements8Outport1_;
                          /* Computed Parameter: TmpRTBAtMaxofElements8Outport1_
                           * Referenced by:
                           */
  uint16_T TmpRTBAtMaxofElements15Outport1;
                          /* Computed Parameter: TmpRTBAtMaxofElements15Outport1
                           * Referenced by:
                           */
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S57>/Constant1'
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
  uint16_T DataStoreMemory1_InitialValue_j;
                          /* Computed Parameter: DataStoreMemory1_InitialValue_j
                           * Referenced by: '<S1>/Data Store Memory1'
                           */
  boolean_T DataStoreMemory_InitialValue_p4;
                          /* Computed Parameter: DataStoreMemory_InitialValue_p4
                           * Referenced by: '<S1>/Data Store Memory'
                           */
  P_MATLABSystem2_MicroMouseTem_T MATLABSystem6;/* '<S62>/MATLAB System2' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem5;/* '<S60>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem4_c;/* '<S60>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem3_c;/* '<S60>/MATLAB System1' */
  P_MATLABSystem2_MicroMouseTem_T MATLABSystem2_ci;/* '<S62>/MATLAB System2' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem1_ci;/* '<S60>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem2_c;/* '<S60>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem1_c;/* '<S60>/MATLAB System1' */
  P_MATLABSystem3_MicroMouseTem_T MATLABSystem4;/* '<S60>/MATLAB System3' */
  P_MATLABSystem3_MicroMouseTem_T MATLABSystem3;/* '<S60>/MATLAB System3' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem2;/* '<S60>/MATLAB System1' */
  P_MATLABSystem1_MicroMouseTem_T MATLABSystem1;/* '<S60>/MATLAB System1' */
};

/* Code_Instrumentation_Declarations_Placeholder */

/* Real-time Model Data Structure */
struct tag_RTM_MicroMouseTemplate_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
    } RateInteraction;
  } Timing;
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
extern uint16_T ADC1s[9];              /* '<S6>/Data Store Memory' */
extern uint16_T ADC_H[9];              /* '<S6>/Data Store Memory1' */
extern uint16_T ADC_L[9];              /* '<S6>/Data Store Memory2' */
extern uint16_T Thresholds[8];         /* '<S1>/Data Store Memory1' */
extern boolean_T Detections[8];        /* '<S1>/Data Store Memory' */

/* External function called from main */
extern void MicroMouseTemplate_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void MicroMouseTemplate_initialize(void);
extern void MicroMouseTemplate_step0(void);/* Sample time: [0.05s, 0.0s] */
extern void MicroMouseTemplate_step1(void);/* Sample time: [0.1s, 0.0s] */
extern void MicroMouseTemplate_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MicroMouseTemplate_T *const MicroMouseTemplate_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/Constant1' : Unused code path elimination
 * Block '<S57>/Cast1' : Eliminate redundant data type conversion
 * Block '<S57>/Cast3' : Eliminate redundant data type conversion
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
 * '<S37>'  : 'MicroMouseTemplate/IR LED Pattern/If Action Subsystem2'
 * '<S38>'  : 'MicroMouseTemplate/IR LED Pattern/If Action Subsystem3'
 * '<S39>'  : 'MicroMouseTemplate/IR LED Pattern/If Action Subsystem4'
 * '<S40>'  : 'MicroMouseTemplate/IR LED Pattern/If Action Subsystem5'
 * '<S41>'  : 'MicroMouseTemplate/IR LED Pattern/If Action Subsystem6'
 * '<S42>'  : 'MicroMouseTemplate/IR LED Pattern/If Action Subsystem7'
 * '<S43>'  : 'MicroMouseTemplate/Motors/If Action Subsystem'
 * '<S44>'  : 'MicroMouseTemplate/Motors/If Action Subsystem1'
 * '<S45>'  : 'MicroMouseTemplate/Motors/If Action Subsystem2'
 * '<S46>'  : 'MicroMouseTemplate/Motors/If Action Subsystem3'
 * '<S47>'  : 'MicroMouseTemplate/Motors/MOTOR_EN'
 * '<S48>'  : 'MicroMouseTemplate/Motors/PWM Output'
 * '<S49>'  : 'MicroMouseTemplate/Motors/PWM Output1'
 * '<S50>'  : 'MicroMouseTemplate/Motors/MOTOR_EN/ECSoC'
 * '<S51>'  : 'MicroMouseTemplate/Motors/MOTOR_EN/ECSoC/ECSimCodegen'
 * '<S52>'  : 'MicroMouseTemplate/Motors/PWM Output/ECSoC'
 * '<S53>'  : 'MicroMouseTemplate/Motors/PWM Output/ECSoC/ECSimCodegen'
 * '<S54>'  : 'MicroMouseTemplate/Motors/PWM Output1/ECSoC'
 * '<S55>'  : 'MicroMouseTemplate/Motors/PWM Output1/ECSoC/ECSimCodegen'
 * '<S56>'  : 'MicroMouseTemplate/Subsystem/ADC2 IN10  IN1'
 * '<S57>'  : 'MicroMouseTemplate/Subsystem/get Highs and Lows'
 * '<S58>'  : 'MicroMouseTemplate/Subsystem/ADC2 IN10  IN1/ECSoC'
 * '<S59>'  : 'MicroMouseTemplate/Subsystem/ADC2 IN10  IN1/ECSoC/ECSimCodegen'
 * '<S60>'  : 'MicroMouseTemplate/Subsystem/get Highs and Lows/Subsystem'
 * '<S61>'  : 'MicroMouseTemplate/Subsystem/get Highs and Lows/Subsystem1'
 * '<S62>'  : 'MicroMouseTemplate/Subsystem/get Highs and Lows/Subsystem2'
 * '<S63>'  : 'MicroMouseTemplate/Subsystem2/CTRL_LEDs'
 * '<S64>'  : 'MicroMouseTemplate/Subsystem2/LED_0'
 * '<S65>'  : 'MicroMouseTemplate/Subsystem2/LED_1'
 * '<S66>'  : 'MicroMouseTemplate/Subsystem2/LED_2'
 * '<S67>'  : 'MicroMouseTemplate/Subsystem2/CTRL_LEDs/ECSoC'
 * '<S68>'  : 'MicroMouseTemplate/Subsystem2/CTRL_LEDs/ECSoC/ECSimCodegen'
 * '<S69>'  : 'MicroMouseTemplate/Subsystem2/LED_0/ECSoC'
 * '<S70>'  : 'MicroMouseTemplate/Subsystem2/LED_0/ECSoC/ECSimCodegen'
 * '<S71>'  : 'MicroMouseTemplate/Subsystem2/LED_1/ECSoC'
 * '<S72>'  : 'MicroMouseTemplate/Subsystem2/LED_1/ECSoC/ECSimCodegen'
 * '<S73>'  : 'MicroMouseTemplate/Subsystem2/LED_2/ECSoC'
 * '<S74>'  : 'MicroMouseTemplate/Subsystem2/LED_2/ECSoC/ECSimCodegen'
 * '<S75>'  : 'MicroMouseTemplate/Subsystem3/SW_1'
 * '<S76>'  : 'MicroMouseTemplate/Subsystem3/SW_2'
 * '<S77>'  : 'MicroMouseTemplate/Subsystem3/SW_1/ECSoC'
 * '<S78>'  : 'MicroMouseTemplate/Subsystem3/SW_1/ECSoC/ECSimCodegen'
 * '<S79>'  : 'MicroMouseTemplate/Subsystem3/SW_2/ECSoC'
 * '<S80>'  : 'MicroMouseTemplate/Subsystem3/SW_2/ECSoC/ECSimCodegen'
 */
#endif                                 /* MicroMouseTemplate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
