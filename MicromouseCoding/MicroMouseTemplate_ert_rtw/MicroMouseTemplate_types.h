/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MicroMouseTemplate_types.h
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

#ifndef MicroMouseTemplate_types_h_
#define MicroMouseTemplate_types_h_
#include "rtwtypes.h"
#include "stm_timer_ll.h"
#include "stm_adc_ll.h"
#ifndef struct_tag_eC52lkJydh6hRqpmhZj8WB
#define struct_tag_eC52lkJydh6hRqpmhZj8WB

struct tag_eC52lkJydh6hRqpmhZj8WB
{
  int32_T isInitialized;
  real_T InitialCondition;
  real_T Buffer[25];
};

#endif                                 /* struct_tag_eC52lkJydh6hRqpmhZj8WB */

#ifndef typedef_CircularBuffer_MicroMouseTemp_T
#define typedef_CircularBuffer_MicroMouseTemp_T

typedef struct tag_eC52lkJydh6hRqpmhZj8WB CircularBuffer_MicroMouseTemp_T;

#endif                             /* typedef_CircularBuffer_MicroMouseTemp_T */

#ifndef struct_tag_CjAmlDaMTaPFsSUtvXbyaE
#define struct_tag_CjAmlDaMTaPFsSUtvXbyaE

struct tag_CjAmlDaMTaPFsSUtvXbyaE
{
  int32_T isInitialized;
  real_T InitialCondition;
  real_T Buffer[10];
};

#endif                                 /* struct_tag_CjAmlDaMTaPFsSUtvXbyaE */

#ifndef typedef_CircularBuffer_MicroMouseTe_p_T
#define typedef_CircularBuffer_MicroMouseTe_p_T

typedef struct tag_CjAmlDaMTaPFsSUtvXbyaE CircularBuffer_MicroMouseTe_p_T;

#endif                             /* typedef_CircularBuffer_MicroMouseTe_p_T */

#ifndef struct_tag_tsKyPuhWUdS8zBSeRGR2aC
#define struct_tag_tsKyPuhWUdS8zBSeRGR2aC

struct tag_tsKyPuhWUdS8zBSeRGR2aC
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_tsKyPuhWUdS8zBSeRGR2aC */

#ifndef typedef_stm32cube_blocks_DigitalPortW_T
#define typedef_stm32cube_blocks_DigitalPortW_T

typedef struct tag_tsKyPuhWUdS8zBSeRGR2aC stm32cube_blocks_DigitalPortW_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortW_T */

/* Custom Type definition for MATLABSystem: '<S49>/PWM Output' */
#include "stm_timer_ll.h"
#include "stm_timer_ll.h"
#ifndef struct_tag_0RzKA0TA5eXyA1b3sjyvMG
#define struct_tag_0RzKA0TA5eXyA1b3sjyvMG

struct tag_0RzKA0TA5eXyA1b3sjyvMG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  TIM_Type_T* TimerHandle;
};

#endif                                 /* struct_tag_0RzKA0TA5eXyA1b3sjyvMG */

#ifndef typedef_stm32cube_blocks_PWMOutput_Mi_T
#define typedef_stm32cube_blocks_PWMOutput_Mi_T

typedef struct tag_0RzKA0TA5eXyA1b3sjyvMG stm32cube_blocks_PWMOutput_Mi_T;

#endif                             /* typedef_stm32cube_blocks_PWMOutput_Mi_T */

/* Custom Type definition for MATLABSystem: '<S53>/Analog to Digital Converter' */
#include "stm_adc_ll.h"
#include "stm_adc_ll.h"
#ifndef struct_tag_GSKovyH6bCN42HwFzVB4DE
#define struct_tag_GSKovyH6bCN42HwFzVB4DE

struct tag_GSKovyH6bCN42HwFzVB4DE
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_GSKovyH6bCN42HwFzVB4DE */

#ifndef typedef_stm32cube_blocks_DigitalPortR_T
#define typedef_stm32cube_blocks_DigitalPortR_T

typedef struct tag_GSKovyH6bCN42HwFzVB4DE stm32cube_blocks_DigitalPortR_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortR_T */

#ifndef struct_tag_fcb3pacyRZnTE3oJedgOZD
#define struct_tag_fcb3pacyRZnTE3oJedgOZD

struct tag_fcb3pacyRZnTE3oJedgOZD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  ADC_Type_T* ADCHandle;
  uint16_T ADCInternalBuffer[18];
};

#endif                                 /* struct_tag_fcb3pacyRZnTE3oJedgOZD */

#ifndef typedef_stm32cube_blocks_AnalogInput__T
#define typedef_stm32cube_blocks_AnalogInput__T

typedef struct tag_fcb3pacyRZnTE3oJedgOZD stm32cube_blocks_AnalogInput__T;

#endif                             /* typedef_stm32cube_blocks_AnalogInput__T */

/* Parameters for system: '<S54>/MATLAB System1' */
typedef struct P_MATLABSystem1_MicroMouseTem_T_ P_MATLABSystem1_MicroMouseTem_T;

/* Parameters for system: '<S54>/MATLAB System3' */
typedef struct P_MATLABSystem3_MicroMouseTem_T_ P_MATLABSystem3_MicroMouseTem_T;

/* Parameters (default storage) */
typedef struct P_MicroMouseTemplate_T_ P_MicroMouseTemplate_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_MicroMouseTemplate_T RT_MODEL_MicroMouseTemplate_T;

#endif                                 /* MicroMouseTemplate_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
