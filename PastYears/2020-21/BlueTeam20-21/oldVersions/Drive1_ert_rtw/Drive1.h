/*
 * Drive1.h
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "Drive1".
 *
 * Model version              : 1.39
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Apr 29 10:32:32 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Drive1_h_
#define RTW_HEADER_Drive1_h_
#include <stddef.h>
#include <string.h>
#ifndef Drive1_COMMON_INCLUDES_
#define Drive1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_SupportFunc_Wrapper.h"
#endif                                 /* Drive1_COMMON_INCLUDES_ */

#include "Drive1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_zcfcn.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T ManualSwitch[16];             /* '<Root>/Manual Switch' */
  real_T v;                            /* '<Root>/Chart1' */
  real_T v_j;                          /* '<Root>/Chart' */
  real_T v3;                           /* '<Root>/Chart' */
  real_T rtb_JoystickChannel2_m;
  real_T rtb_JoystickChannel1_c;
  real_T rtb_UP_k;
  real_T rtb_DOWN_c;
  real_T rtb_LEFT_b;
  real_T rtb_RIGHT_p;
  real_T rtb_X_c;
  real_T rtb_B_f;
  real_T rtb_Y_g;
  real_T rtb_A_g;
} B_Drive1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  vexv5_SmartMotorWrite_Drive1_T obj;  /* '<Root>/intake ' */
  vexv5_SmartMotorWrite_Drive1_T obj_m;/* '<Root>/conveyor belt' */
  vexv5_SmartMotorWrite_Drive1_T obj_h;/* '<Root>/Wheel# 4//5' */
  vexv5_SmartMotorWrite_Drive1_T obj_l;/* '<Root>/Wheel# 3' */
  vexv5_SmartMotorWrite_Drive1_T obj_f;/* '<Root>/Wheel# 2' */
  vexv5_SmartMotorWrite_Drive1_T obj_mh;/* '<Root>/Wheel# 1' */
  vexv5_SmartMotorWrite_Drive1_T obj_hv;/* '<Root>/Right Motor' */
  vexv5_SmartMotorWrite_Drive1_T obj_g;/* '<Root>/Left Motor' */
  int32_T sfEvent;                     /* '<Root>/Chart' */
  vexv5_GamepadButton_Drive1_T obj_b;  /* '<S9>/Y' */
  vexv5_GamepadButton_Drive1_T obj_p;  /* '<S9>/X' */
  vexv5_GamepadButton_Drive1_T obj_n;  /* '<S9>/UP' */
  vexv5_GamepadButton_Drive1_T obj_a;  /* '<S9>/RIGHT' */
  vexv5_GamepadButton_Drive1_T obj_px; /* '<S9>/R2' */
  vexv5_GamepadButton_Drive1_T obj_c;  /* '<S9>/R1' */
  vexv5_GamepadButton_Drive1_T obj_o;  /* '<S9>/LEFT' */
  vexv5_GamepadButton_Drive1_T obj_ov; /* '<S9>/L2' */
  vexv5_GamepadButton_Drive1_T obj_lh; /* '<S9>/L1' */
  vexv5_GamepadButton_Drive1_T obj_m4; /* '<S9>/DOWN' */
  vexv5_GamepadButton_Drive1_T obj_bv; /* '<S9>/B' */
  vexv5_GamepadButton_Drive1_T obj_d;  /* '<S9>/A' */
  vexv5_GamepadJoystick_Drive1_T obj_oi;/* '<S9>/Joystick Channel 3' */
  vexv5_GamepadJoystick_Drive1_T obj_od;/* '<S9>/Joystick Channel 1' */
  vexv5_GamepadJoystick_Drive1_T obj_bw;/* '<S9>/Joystick  Channel 4' */
  vexv5_GamepadJoystick_Drive1_T obj_gl;/* '<S9>/Joystick  Channel 2' */
  uint8_T is_active_c1_Drive1;         /* '<Root>/Chart1' */
  uint8_T is_c1_Drive1;                /* '<Root>/Chart1' */
  uint8_T is_active_c3_Drive1;         /* '<Root>/Chart' */
  uint8_T is_c3_Drive1;                /* '<Root>/Chart' */
  boolean_T objisempty;                /* '<Root>/intake ' */
  boolean_T objisempty_b;              /* '<Root>/conveyor belt' */
  boolean_T objisempty_n;              /* '<Root>/Wheel# 4//5' */
  boolean_T objisempty_o;              /* '<Root>/Wheel# 3' */
  boolean_T objisempty_e;              /* '<Root>/Wheel# 2' */
  boolean_T objisempty_j;              /* '<Root>/Wheel# 1' */
  boolean_T objisempty_f;              /* '<S9>/Y' */
  boolean_T objisempty_l;              /* '<S9>/X' */
  boolean_T objisempty_ew;             /* '<S9>/UP' */
  boolean_T objisempty_g;              /* '<S9>/RIGHT' */
  boolean_T objisempty_k;              /* '<S9>/R2' */
  boolean_T objisempty_c;              /* '<S9>/R1' */
  boolean_T objisempty_d;              /* '<S9>/LEFT' */
  boolean_T objisempty_nd;             /* '<S9>/L2' */
  boolean_T objisempty_br;             /* '<S9>/L1' */
  boolean_T objisempty_ct;             /* '<S9>/Joystick Channel 3' */
  boolean_T objisempty_i;              /* '<S9>/Joystick Channel 1' */
  boolean_T objisempty_jn;             /* '<S9>/Joystick  Channel 4' */
  boolean_T objisempty_kl;             /* '<S9>/Joystick  Channel 2' */
  boolean_T objisempty_cw;             /* '<S9>/DOWN' */
  boolean_T objisempty_id;             /* '<S9>/B' */
  boolean_T objisempty_lf;             /* '<S9>/A' */
  boolean_T objisempty_a;              /* '<Root>/Right Motor' */
  boolean_T objisempty_b5;             /* '<Root>/Left Motor' */
} DW_Drive1_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Chart1_Trig_ZCE;          /* '<Root>/Chart1' */
  ZCSigState Chart_Trig_ZCE[2];        /* '<Root>/Chart' */
} PrevZCX_Drive1_T;

/* Parameters (default storage) */
struct P_Drive1_T_ {
  real_T Joystick3Channel_Value;       /* Expression: -2.56356881107493
                                        * Referenced by: '<S8>/Joystick 3 Channel'
                                        */
  real_T Joystick4Channel_Value;       /* Expression: -4.224806596091213
                                        * Referenced by: '<S8>/Joystick 4 Channel'
                                        */
  real_T Joystick2Channel_Value;       /* Expression: -77
                                        * Referenced by: '<S8>/Joystick 2 Channel'
                                        */
  real_T Joystick1Channel_Value;       /* Expression: 0
                                        * Referenced by: '<S8>/Joystick 1 Channel'
                                        */
  real_T UP_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/UP'
                                        */
  real_T DOWN_Value;                   /* Expression: 0
                                        * Referenced by: '<S8>/DOWN'
                                        */
  real_T LEFT_Value;                   /* Expression: 0
                                        * Referenced by: '<S8>/LEFT'
                                        */
  real_T RIGHT_Value;                  /* Expression: 0
                                        * Referenced by: '<S8>/RIGHT'
                                        */
  real_T X_Value;                      /* Expression: 0
                                        * Referenced by: '<S8>/X'
                                        */
  real_T B_Value;                      /* Expression: 0
                                        * Referenced by: '<S8>/B'
                                        */
  real_T Y_Value;                      /* Expression: 0
                                        * Referenced by: '<S8>/Y'
                                        */
  real_T A_Value;                      /* Expression: 0
                                        * Referenced by: '<S8>/A'
                                        */
  real_T L2_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/L2'
                                        */
  real_T L1_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/L1'
                                        */
  real_T R2_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/R2'
                                        */
  real_T R1_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/R1'
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
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<Root>/Manual Switch'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_Drive1_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Drive1_T Drive1_P;

/* Block signals (default storage) */
extern B_Drive1_T Drive1_B;

/* Block states (default storage) */
extern DW_Drive1_T Drive1_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_Drive1_T Drive1_PrevZCX;

/* Model entry point functions */
extern void Drive1_initialize(void);
extern void Drive1_step(void);
extern void Drive1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Drive1_T *const Drive1_M;

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
 * '<Root>' : 'Drive1'
 * '<S1>'   : 'Drive1/Chart'
 * '<S2>'   : 'Drive1/Chart1'
 * '<S3>'   : 'Drive1/Control Logic'
 * '<S4>'   : 'Drive1/Dashboard Gamepad'
 * '<S5>'   : 'Drive1/VEX Gamepad'
 * '<S6>'   : 'Drive1/Control Logic/Arcade Module'
 * '<S7>'   : 'Drive1/Control Logic/Arcade Module/MATLAB Function'
 * '<S8>'   : 'Drive1/Dashboard Gamepad/Dashboard  Controls'
 * '<S9>'   : 'Drive1/VEX Gamepad/VEX Gamepad  Controls'
 */
#endif                                 /* RTW_HEADER_Drive1_h_ */
