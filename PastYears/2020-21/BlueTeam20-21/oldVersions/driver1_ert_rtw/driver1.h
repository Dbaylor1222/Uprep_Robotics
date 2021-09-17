/*
 * driver1.h
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "driver1".
 *
 * Model version              : 1.22
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Apr 27 10:17:03 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_driver1_h_
#define RTW_HEADER_driver1_h_
#include <stddef.h>
#include <string.h>
#ifndef driver1_COMMON_INCLUDES_
#define driver1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_SupportFunc_Wrapper.h"
#endif                                 /* driver1_COMMON_INCLUDES_ */

#include "driver1_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  vexv5_SmartMotorWrite_driver1_T obj; /* '<Root>/intake ' */
  vexv5_SmartMotorWrite_driver1_T obj_m;/* '<Root>/conveyor belt' */
  vexv5_SmartMotorWrite_driver1_T obj_h;/* '<Root>/Wheel# 4//5' */
  vexv5_SmartMotorWrite_driver1_T obj_l;/* '<Root>/Wheel# 3' */
  vexv5_SmartMotorWrite_driver1_T obj_f;/* '<Root>/Wheel# 2' */
  vexv5_SmartMotorWrite_driver1_T obj_mh;/* '<Root>/Wheel# 1' */
  vexv5_SmartMotorWrite_driver1_T obj_hv;/* '<Root>/Right Motor' */
  vexv5_SmartMotorWrite_driver1_T obj_g;/* '<Root>/Left Motor' */
  vexv5_GamepadButton_driver1_T obj_b; /* '<S8>/Y' */
  vexv5_GamepadButton_driver1_T obj_p; /* '<S8>/X' */
  vexv5_GamepadButton_driver1_T obj_n; /* '<S8>/UP' */
  vexv5_GamepadButton_driver1_T obj_a; /* '<S8>/RIGHT' */
  vexv5_GamepadButton_driver1_T obj_px;/* '<S8>/R2' */
  vexv5_GamepadButton_driver1_T obj_c; /* '<S8>/R1' */
  vexv5_GamepadButton_driver1_T obj_o; /* '<S8>/LEFT' */
  vexv5_GamepadButton_driver1_T obj_ov;/* '<S8>/L2' */
  vexv5_GamepadButton_driver1_T obj_lh;/* '<S8>/L1' */
  vexv5_GamepadButton_driver1_T obj_m4;/* '<S8>/DOWN' */
  vexv5_GamepadButton_driver1_T obj_bv;/* '<S8>/B' */
  vexv5_GamepadButton_driver1_T obj_d; /* '<S8>/A' */
  vexv5_GamepadJoystick_driver1_T obj_oi;/* '<S8>/Joystick Channel 3' */
  vexv5_GamepadJoystick_driver1_T obj_od;/* '<S8>/Joystick Channel 1' */
  vexv5_GamepadJoystick_driver1_T obj_bw;/* '<S8>/Joystick  Channel 4' */
  vexv5_GamepadJoystick_driver1_T obj_gl;/* '<S8>/Joystick  Channel 2' */
  uint8_T is_active_c3_driver1;        /* '<Root>/Chart' */
  uint8_T is_c3_driver1;               /* '<Root>/Chart' */
  boolean_T objisempty;                /* '<Root>/intake ' */
  boolean_T objisempty_b;              /* '<Root>/conveyor belt' */
  boolean_T objisempty_n;              /* '<Root>/Wheel# 4//5' */
  boolean_T objisempty_o;              /* '<Root>/Wheel# 3' */
  boolean_T objisempty_e;              /* '<Root>/Wheel# 2' */
  boolean_T objisempty_j;              /* '<Root>/Wheel# 1' */
  boolean_T objisempty_f;              /* '<S8>/Y' */
  boolean_T objisempty_l;              /* '<S8>/X' */
  boolean_T objisempty_ew;             /* '<S8>/UP' */
  boolean_T objisempty_g;              /* '<S8>/RIGHT' */
  boolean_T objisempty_k;              /* '<S8>/R2' */
  boolean_T objisempty_c;              /* '<S8>/R1' */
  boolean_T objisempty_d;              /* '<S8>/LEFT' */
  boolean_T objisempty_nd;             /* '<S8>/L2' */
  boolean_T objisempty_br;             /* '<S8>/L1' */
  boolean_T objisempty_ct;             /* '<S8>/Joystick Channel 3' */
  boolean_T objisempty_i;              /* '<S8>/Joystick Channel 1' */
  boolean_T objisempty_jn;             /* '<S8>/Joystick  Channel 4' */
  boolean_T objisempty_kl;             /* '<S8>/Joystick  Channel 2' */
  boolean_T objisempty_cw;             /* '<S8>/DOWN' */
  boolean_T objisempty_id;             /* '<S8>/B' */
  boolean_T objisempty_lf;             /* '<S8>/A' */
  boolean_T objisempty_a;              /* '<Root>/Right Motor' */
  boolean_T objisempty_b5;             /* '<Root>/Left Motor' */
} DW_driver1_T;

/* Parameters (default storage) */
struct P_driver1_T_ {
  real_T Joystick3Channel_Value;       /* Expression: -55.52631578947368
                                        * Referenced by: '<S7>/Joystick 3 Channel'
                                        */
  real_T Joystick4Channel_Value;       /* Expression: 0
                                        * Referenced by: '<S7>/Joystick 4 Channel'
                                        */
  real_T Joystick2Channel_Value;       /* Expression: -77
                                        * Referenced by: '<S7>/Joystick 2 Channel'
                                        */
  real_T Joystick1Channel_Value;       /* Expression: 0
                                        * Referenced by: '<S7>/Joystick 1 Channel'
                                        */
  real_T UP_Value;                     /* Expression: 0
                                        * Referenced by: '<S7>/UP'
                                        */
  real_T DOWN_Value;                   /* Expression: 0
                                        * Referenced by: '<S7>/DOWN'
                                        */
  real_T LEFT_Value;                   /* Expression: 0
                                        * Referenced by: '<S7>/LEFT'
                                        */
  real_T RIGHT_Value;                  /* Expression: 0
                                        * Referenced by: '<S7>/RIGHT'
                                        */
  real_T X_Value;                      /* Expression: 0
                                        * Referenced by: '<S7>/X'
                                        */
  real_T B_Value;                      /* Expression: 0
                                        * Referenced by: '<S7>/B'
                                        */
  real_T Y_Value;                      /* Expression: 0
                                        * Referenced by: '<S7>/Y'
                                        */
  real_T A_Value;                      /* Expression: 0
                                        * Referenced by: '<S7>/A'
                                        */
  real_T L2_Value;                     /* Expression: 0
                                        * Referenced by: '<S7>/L2'
                                        */
  real_T L1_Value;                     /* Expression: 0
                                        * Referenced by: '<S7>/L1'
                                        */
  real_T R2_Value;                     /* Expression: 0
                                        * Referenced by: '<S7>/R2'
                                        */
  real_T R1_Value;                     /* Expression: 0
                                        * Referenced by: '<S7>/R1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T Gain2_Gain;                   /* Expression: 100
                                        * Referenced by: '<S2>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<Root>/Manual Switch'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_driver1_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_driver1_T driver1_P;

/* Block states (default storage) */
extern DW_driver1_T driver1_DW;

/* Model entry point functions */
extern void driver1_initialize(void);
extern void driver1_step(void);
extern void driver1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_driver1_T *const driver1_M;

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
 * '<Root>' : 'driver1'
 * '<S1>'   : 'driver1/Chart'
 * '<S2>'   : 'driver1/Control Logic'
 * '<S3>'   : 'driver1/Dashboard Gamepad'
 * '<S4>'   : 'driver1/VEX Gamepad'
 * '<S5>'   : 'driver1/Control Logic/Arcade Module'
 * '<S6>'   : 'driver1/Control Logic/Arcade Module/MATLAB Function'
 * '<S7>'   : 'driver1/Dashboard Gamepad/Dashboard  Controls'
 * '<S8>'   : 'driver1/VEX Gamepad/VEX Gamepad  Controls'
 */
#endif                                 /* RTW_HEADER_driver1_h_ */
