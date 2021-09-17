/*
 * Drive1.c
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

#include "Drive1.h"
#include "Drive1_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Drive1_IN_NO_ACTIVE_CHILD      ((uint8_T)0U)
#define Drive1_IN_Out_Back             ((uint8_T)1U)
#define Drive1_IN_Out_Front            ((uint8_T)2U)
#define Drive1_IN_stop                 ((uint8_T)3U)
#define Drive1_event_SwitchR1          (0)
#define Drive1_event_SwitchR2          (1)

/* Named constants for Chart: '<Root>/Chart1' */
#define Drive1_IN_On                   ((uint8_T)1U)
#define Drive1_IN_off                  ((uint8_T)2U)
#define Drive1_IN_start                ((uint8_T)3U)

/* Block signals (default storage) */
B_Drive1_T Drive1_B;

/* Block states (default storage) */
DW_Drive1_T Drive1_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Drive1_T Drive1_PrevZCX;

/* Real-time model */
static RT_MODEL_Drive1_T Drive1_M_;
RT_MODEL_Drive1_T *const Drive1_M = &Drive1_M_;

/* Forward declaration for local functions */
static void Drive1_chartstep_c3_Drive1(void);

/* Function for Chart: '<Root>/Chart' */
static void Drive1_chartstep_c3_Drive1(void)
{
  /* Chart: '<Root>/Chart' */
  /* During: Chart */
  if (Drive1_DW.is_active_c3_Drive1 == 0U) {
    /* Entry: Chart */
    Drive1_DW.is_active_c3_Drive1 = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:4' */
    Drive1_DW.is_c3_Drive1 = Drive1_IN_stop;

    /* Entry 'stop': '<S1>:3' */
    Drive1_B.v_j = 0.0;
    Drive1_B.v3 = 0.0;
  } else {
    switch (Drive1_DW.is_c3_Drive1) {
     case Drive1_IN_Out_Back:
      Drive1_B.v_j = 127.0;
      Drive1_B.v3 = -127.0;

      /* During 'Out_Back': '<S1>:5' */
      if (Drive1_DW.sfEvent == Drive1_event_SwitchR2) {
        /* Transition: '<S1>:17' */
        Drive1_DW.is_c3_Drive1 = Drive1_IN_stop;

        /* Entry 'stop': '<S1>:3' */
        Drive1_B.v_j = 0.0;
        Drive1_B.v3 = 0.0;
      } else if (Drive1_DW.sfEvent == Drive1_event_SwitchR1) {
        /* Transition: '<S1>:19' */
        Drive1_DW.is_c3_Drive1 = Drive1_IN_Out_Front;

        /* Entry 'Out_Front': '<S1>:6' */
        Drive1_B.v_j = 127.0;
        Drive1_B.v3 = 127.0;
      }
      break;

     case Drive1_IN_Out_Front:
      Drive1_B.v_j = 127.0;
      Drive1_B.v3 = 127.0;

      /* During 'Out_Front': '<S1>:6' */
      if (Drive1_DW.sfEvent == Drive1_event_SwitchR1) {
        /* Transition: '<S1>:16' */
        Drive1_DW.is_c3_Drive1 = Drive1_IN_stop;

        /* Entry 'stop': '<S1>:3' */
        Drive1_B.v_j = 0.0;
        Drive1_B.v3 = 0.0;
      } else if (Drive1_DW.sfEvent == Drive1_event_SwitchR2) {
        /* Transition: '<S1>:18' */
        Drive1_DW.is_c3_Drive1 = Drive1_IN_Out_Back;

        /* Entry 'Out_Back': '<S1>:5' */
        Drive1_B.v_j = 127.0;
        Drive1_B.v3 = -127.0;
      }
      break;

     default:
      Drive1_B.v_j = 0.0;
      Drive1_B.v3 = 0.0;

      /* During 'stop': '<S1>:3' */
      if (Drive1_DW.sfEvent == Drive1_event_SwitchR1) {
        /* Transition: '<S1>:9' */
        Drive1_DW.is_c3_Drive1 = Drive1_IN_Out_Front;

        /* Entry 'Out_Front': '<S1>:6' */
        Drive1_B.v_j = 127.0;
        Drive1_B.v3 = 127.0;
      } else if (Drive1_DW.sfEvent == Drive1_event_SwitchR2) {
        /* Transition: '<S1>:14' */
        Drive1_DW.is_c3_Drive1 = Drive1_IN_Out_Back;

        /* Entry 'Out_Back': '<S1>:5' */
        Drive1_B.v_j = 127.0;
        Drive1_B.v3 = -127.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model step function */
void Drive1_step(void)
{
  V5_ControllerStatus controller_status;
  real_T rtb_L1_0;
  real_T rtb_L2_0;
  real_T rtb_R1_0;
  real_T rtb_R2_0;
  real_T rtb_lMtr;
  real_T rtb_rMtr;
  ZCEventType zcEvent;
  ZCEventType zcEvent_idx_1;

  /* MATLABSystem: '<S9>/Joystick Channel 3' */
  rtb_lMtr = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_lMtr = vexControllerGet(0.0, AnaLeftY);
  }

  /* MATLABSystem: '<S9>/Joystick  Channel 4' */
  rtb_rMtr = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_rMtr = vexControllerGet(0.0, AnaLeftX);
  }

  /* MATLABSystem: '<S9>/Joystick  Channel 2' */
  Drive1_B.rtb_JoystickChannel2_m = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_JoystickChannel2_m = vexControllerGet(0.0, AnaRightY);
  }

  /* MATLABSystem: '<S9>/Joystick Channel 1' */
  Drive1_B.rtb_JoystickChannel1_c = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_JoystickChannel1_c = vexControllerGet(0.0, AnaRightX);
  }

  /* MATLABSystem: '<S9>/UP' */
  Drive1_B.rtb_UP_k = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_UP_k = vexControllerGet(0.0, Button7U);
  }

  /* MATLABSystem: '<S9>/DOWN' */
  Drive1_B.rtb_DOWN_c = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_DOWN_c = vexControllerGet(0.0, Button7D);
  }

  /* MATLABSystem: '<S9>/LEFT' */
  Drive1_B.rtb_LEFT_b = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_LEFT_b = vexControllerGet(0.0, Button7L);
  }

  /* MATLABSystem: '<S9>/RIGHT' */
  Drive1_B.rtb_RIGHT_p = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_RIGHT_p = vexControllerGet(0.0, Button7R);
  }

  /* MATLABSystem: '<S9>/X' */
  Drive1_B.rtb_X_c = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_X_c = vexControllerGet(0.0, Button8U);
  }

  /* MATLABSystem: '<S9>/B' */
  Drive1_B.rtb_B_f = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_B_f = vexControllerGet(0.0, Button8D);
  }

  /* MATLABSystem: '<S9>/Y' */
  Drive1_B.rtb_Y_g = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_Y_g = vexControllerGet(0.0, Button8L);
  }

  /* MATLABSystem: '<S9>/A' */
  Drive1_B.rtb_A_g = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    Drive1_B.rtb_A_g = vexControllerGet(0.0, Button8R);
  }

  /* MATLABSystem: '<S9>/L2' */
  rtb_L2_0 = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_L2_0 = vexControllerGet(0.0, Button5D);
  }

  /* MATLABSystem: '<S9>/L1' */
  rtb_L1_0 = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_L1_0 = vexControllerGet(0.0, Button5U);
  }

  /* MATLABSystem: '<S9>/R2' */
  rtb_R2_0 = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_R2_0 = vexControllerGet(0.0, Button6D);
  }

  /* MATLABSystem: '<S9>/R1' */
  rtb_R1_0 = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_R1_0 = vexControllerGet(0.0, Button6U);
  }

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<S8>/A'
   *  Constant: '<S8>/B'
   *  Constant: '<S8>/DOWN'
   *  Constant: '<S8>/Joystick 1 Channel'
   *  Constant: '<S8>/Joystick 2 Channel'
   *  Constant: '<S8>/Joystick 3 Channel'
   *  Constant: '<S8>/Joystick 4 Channel'
   *  Constant: '<S8>/L1'
   *  Constant: '<S8>/L2'
   *  Constant: '<S8>/LEFT'
   *  Constant: '<S8>/R1'
   *  Constant: '<S8>/R2'
   *  Constant: '<S8>/RIGHT'
   *  Constant: '<S8>/UP'
   *  Constant: '<S8>/X'
   *  Constant: '<S8>/Y'
   *  MATLABSystem: '<S9>/A'
   *  MATLABSystem: '<S9>/B'
   *  MATLABSystem: '<S9>/DOWN'
   *  MATLABSystem: '<S9>/Joystick  Channel 2'
   *  MATLABSystem: '<S9>/Joystick  Channel 4'
   *  MATLABSystem: '<S9>/Joystick Channel 1'
   *  MATLABSystem: '<S9>/Joystick Channel 3'
   *  MATLABSystem: '<S9>/L1'
   *  MATLABSystem: '<S9>/L2'
   *  MATLABSystem: '<S9>/LEFT'
   *  MATLABSystem: '<S9>/R1'
   *  MATLABSystem: '<S9>/R2'
   *  MATLABSystem: '<S9>/RIGHT'
   *  MATLABSystem: '<S9>/UP'
   *  MATLABSystem: '<S9>/X'
   *  MATLABSystem: '<S9>/Y'
   */
  if (Drive1_P.ManualSwitch_CurrentSetting == 1) {
    Drive1_B.ManualSwitch[0] = Drive1_P.Joystick3Channel_Value;
    Drive1_B.ManualSwitch[1] = Drive1_P.Joystick4Channel_Value;
    Drive1_B.ManualSwitch[2] = Drive1_P.Joystick2Channel_Value;
    Drive1_B.ManualSwitch[3] = Drive1_P.Joystick1Channel_Value;
    Drive1_B.ManualSwitch[4] = Drive1_P.UP_Value;
    Drive1_B.ManualSwitch[5] = Drive1_P.DOWN_Value;
    Drive1_B.ManualSwitch[6] = Drive1_P.LEFT_Value;
    Drive1_B.ManualSwitch[7] = Drive1_P.RIGHT_Value;
    Drive1_B.ManualSwitch[8] = Drive1_P.X_Value;
    Drive1_B.ManualSwitch[9] = Drive1_P.B_Value;
    Drive1_B.ManualSwitch[10] = Drive1_P.Y_Value;
    Drive1_B.ManualSwitch[11] = Drive1_P.A_Value;
    Drive1_B.ManualSwitch[12] = Drive1_P.L2_Value;
    Drive1_B.ManualSwitch[13] = Drive1_P.L1_Value;
    Drive1_B.ManualSwitch[14] = Drive1_P.R2_Value;
    Drive1_B.ManualSwitch[15] = Drive1_P.R1_Value;
  } else {
    Drive1_B.ManualSwitch[0] = rtb_lMtr;
    Drive1_B.ManualSwitch[1] = rtb_rMtr;
    Drive1_B.ManualSwitch[2] = Drive1_B.rtb_JoystickChannel2_m;
    Drive1_B.ManualSwitch[3] = Drive1_B.rtb_JoystickChannel1_c;
    Drive1_B.ManualSwitch[4] = Drive1_B.rtb_UP_k;
    Drive1_B.ManualSwitch[5] = Drive1_B.rtb_DOWN_c;
    Drive1_B.ManualSwitch[6] = Drive1_B.rtb_LEFT_b;
    Drive1_B.ManualSwitch[7] = Drive1_B.rtb_RIGHT_p;
    Drive1_B.ManualSwitch[8] = Drive1_B.rtb_X_c;
    Drive1_B.ManualSwitch[9] = Drive1_B.rtb_B_f;
    Drive1_B.ManualSwitch[10] = Drive1_B.rtb_Y_g;
    Drive1_B.ManualSwitch[11] = Drive1_B.rtb_A_g;
    Drive1_B.ManualSwitch[12] = rtb_L2_0;
    Drive1_B.ManualSwitch[13] = rtb_L1_0;
    Drive1_B.ManualSwitch[14] = rtb_R2_0;
    Drive1_B.ManualSwitch[15] = rtb_R1_0;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* Chart: '<Root>/Chart1' incorporates:
   *  TriggerPort: '<S2>/Switch'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&Drive1_PrevZCX.Chart1_Trig_ZCE,
                     (Drive1_B.ManualSwitch[13]));
  if (zcEvent != NO_ZCEVENT) {
    /* Gateway: Chart1 */
    /* Event: '<S2>:34' */
    /* During: Chart1 */
    if (Drive1_DW.is_active_c1_Drive1 == 0U) {
      /* Entry: Chart1 */
      Drive1_DW.is_active_c1_Drive1 = 1U;

      /* Entry Internal: Chart1 */
      /* Transition: '<S2>:4' */
      Drive1_DW.is_c1_Drive1 = Drive1_IN_start;

      /* Entry 'start': '<S2>:35' */
      Drive1_B.v = -50.0;
    } else {
      switch (Drive1_DW.is_c1_Drive1) {
       case Drive1_IN_On:
        /* During 'On': '<S2>:5' */
        /* Transition: '<S2>:17' */
        Drive1_DW.is_c1_Drive1 = Drive1_IN_off;

        /* Entry 'off': '<S2>:3' */
        Drive1_B.v = 0.0;
        break;

       case Drive1_IN_off:
        /* During 'off': '<S2>:3' */
        /* Transition: '<S2>:14' */
        Drive1_DW.is_c1_Drive1 = Drive1_IN_On;

        /* Entry 'On': '<S2>:5' */
        Drive1_B.v = 127.0;
        break;

       default:
        /* During 'start': '<S2>:35' */
        /* Transition: '<S2>:36' */
        Drive1_DW.is_c1_Drive1 = Drive1_IN_off;

        /* Entry 'off': '<S2>:3' */
        Drive1_B.v = 0.0;
        break;
      }
    }
  }

  /* MATLAB Function: '<S6>/MATLAB Function' */
  /* MATLAB Function 'Arcade Module/MATLAB Function': '<S7>:1' */
  /* '<S7>:1:4' */
  rtb_lMtr = Drive1_B.ManualSwitch[0] + Drive1_B.ManualSwitch[1];
  if (!(rtb_lMtr > -127.0)) {
    rtb_lMtr = -127.0;
  }

  if (!(rtb_lMtr < 127.0)) {
    rtb_lMtr = 127.0;
  }

  /* '<S7>:1:5' */
  rtb_rMtr = Drive1_B.ManualSwitch[0] - Drive1_B.ManualSwitch[1];
  if (!(rtb_rMtr > -127.0)) {
    rtb_rMtr = -127.0;
  }

  if (!(rtb_rMtr < 127.0)) {
    rtb_rMtr = 127.0;
  }

  /* End of MATLAB Function: '<S6>/MATLAB Function' */
  /* MATLABSystem: '<Root>/Left Motor' */
  if (rtb_lMtr > 100.0) {
    rtb_lMtr = 100.0;
  } else if (rtb_lMtr < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 10);
  vexMotorVelocitySet(10, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/Left Motor' */
  /* Gain: '<Root>/Gain' */
  rtb_lMtr = Drive1_P.Gain_Gain * rtb_rMtr;

  /* MATLABSystem: '<Root>/Right Motor' */
  if (rtb_lMtr > 100.0) {
    rtb_lMtr = 100.0;
  } else if (rtb_lMtr < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 11);
  vexMotorVelocitySet(11, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/Right Motor' */
  /* MATLABSystem: '<Root>/Wheel# 1' */
  rtb_lMtr = Drive1_B.v;
  if (Drive1_B.v > 100.0) {
    rtb_lMtr = 100.0;
  } else if (Drive1_B.v < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 18);
  vexMotorVelocitySet(18, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/Wheel# 1' */

  /* Gain: '<Root>/Gain3' */
  rtb_lMtr = Drive1_P.Gain3_Gain * Drive1_B.v;

  /* MATLABSystem: '<Root>/Wheel# 2' */
  if (rtb_lMtr > 100.0) {
    rtb_lMtr = 100.0;
  } else if (rtb_lMtr < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 12);
  vexMotorVelocitySet(12, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/Wheel# 2' */

  /* Chart: '<Root>/Chart' incorporates:
   *  TriggerPort: '<S1>/input events'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&Drive1_PrevZCX.Chart_Trig_ZCE[0],
                     (Drive1_B.ManualSwitch[15]));
  zcEvent_idx_1 = rt_ZCFcn(RISING_ZERO_CROSSING,&Drive1_PrevZCX.Chart_Trig_ZCE[1],
    (Drive1_B.ManualSwitch[14]));
  if ((zcEvent != NO_ZCEVENT) || (zcEvent_idx_1 != NO_ZCEVENT)) {
    /* Gateway: Chart */
    if ((int8_T)zcEvent == 1) {
      /* Event: '<S1>:30' */
      Drive1_DW.sfEvent = Drive1_event_SwitchR1;
      Drive1_chartstep_c3_Drive1();
    }

    if ((int8_T)zcEvent_idx_1 == 1) {
      /* Event: '<S1>:31' */
      Drive1_DW.sfEvent = Drive1_event_SwitchR2;
      Drive1_chartstep_c3_Drive1();
    }
  }

  /* Gain: '<Root>/Gain4' */
  rtb_lMtr = Drive1_P.Gain4_Gain * Drive1_B.v3;

  /* MATLABSystem: '<Root>/Wheel# 3' */
  if (rtb_lMtr > 100.0) {
    rtb_lMtr = 100.0;
  } else if (rtb_lMtr < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 2);
  vexMotorVelocitySet(2, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/Wheel# 3' */

  /* MATLABSystem: '<Root>/Wheel# 4//5' */
  rtb_lMtr = Drive1_B.v_j;
  if (Drive1_B.v_j > 100.0) {
    rtb_lMtr = 100.0;
  } else if (Drive1_B.v_j < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 0);
  vexMotorVelocitySet(0, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/Wheel# 4//5' */

  /* MATLABSystem: '<Root>/conveyor belt' */
  rtb_lMtr = Drive1_B.v_j;
  if (Drive1_B.v_j > 100.0) {
    rtb_lMtr = 100.0;
  } else if (Drive1_B.v_j < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 3);
  vexMotorVelocitySet(3, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/conveyor belt' */

  /* Gain: '<Root>/Gain1' */
  rtb_lMtr = Drive1_P.Gain1_Gain * Drive1_B.v;

  /* MATLABSystem: '<Root>/intake ' */
  if (rtb_lMtr > 100.0) {
    rtb_lMtr = 100.0;
  } else if (rtb_lMtr < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 19);
  vexMotorVelocitySet(19, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/intake ' */
}

/* Model initialize function */
void Drive1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Drive1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Drive1_B), 0,
                sizeof(B_Drive1_T));

  /* states (dwork) */
  (void) memset((void *)&Drive1_DW, 0,
                sizeof(DW_Drive1_T));

  /* Start for MATLABSystem: '<S9>/Joystick Channel 3' */
  Drive1_DW.objisempty_ct = true;
  Drive1_DW.obj_oi.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/Joystick  Channel 4' */
  Drive1_DW.objisempty_jn = true;
  Drive1_DW.obj_bw.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/Joystick  Channel 2' */
  Drive1_DW.objisempty_kl = true;
  Drive1_DW.obj_gl.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/Joystick Channel 1' */
  Drive1_DW.objisempty_i = true;
  Drive1_DW.obj_od.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/UP' */
  Drive1_DW.objisempty_ew = true;
  Drive1_DW.obj_n.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/DOWN' */
  Drive1_DW.objisempty_cw = true;
  Drive1_DW.obj_m4.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/LEFT' */
  Drive1_DW.objisempty_d = true;
  Drive1_DW.obj_o.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/RIGHT' */
  Drive1_DW.objisempty_g = true;
  Drive1_DW.obj_a.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/X' */
  Drive1_DW.objisempty_l = true;
  Drive1_DW.obj_p.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/B' */
  Drive1_DW.objisempty_id = true;
  Drive1_DW.obj_bv.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/Y' */
  Drive1_DW.objisempty_f = true;
  Drive1_DW.obj_b.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/A' */
  Drive1_DW.objisempty_lf = true;
  Drive1_DW.obj_d.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/L2' */
  Drive1_DW.objisempty_nd = true;
  Drive1_DW.obj_ov.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/L1' */
  Drive1_DW.objisempty_br = true;
  Drive1_DW.obj_lh.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/R2' */
  Drive1_DW.objisempty_k = true;
  Drive1_DW.obj_px.isInitialized = 1;

  /* Start for MATLABSystem: '<S9>/R1' */
  Drive1_DW.objisempty_c = true;
  Drive1_DW.obj_c.isInitialized = 1;

  /* Start for MATLABSystem: '<Root>/Left Motor' */
  Drive1_DW.obj_g.matlabCodegenIsDeleted = false;
  Drive1_DW.objisempty_b5 = true;
  Drive1_DW.obj_g.isInitialized = 1;
  vexMotorBrakeModeSet(10, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(10, kMotorGearSet_36);
  vexMotorPositionReset(10);
  Drive1_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Right Motor' */
  Drive1_DW.obj_hv.matlabCodegenIsDeleted = false;
  Drive1_DW.objisempty_a = true;
  Drive1_DW.obj_hv.isInitialized = 1;
  vexMotorBrakeModeSet(11, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(11, kMotorGearSet_36);
  vexMotorPositionReset(11);
  Drive1_DW.obj_hv.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Wheel# 1' */
  Drive1_DW.obj_mh.matlabCodegenIsDeleted = false;
  Drive1_DW.objisempty_j = true;
  Drive1_DW.obj_mh.isInitialized = 1;
  vexMotorBrakeModeSet(18, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(18, kMotorGearSet_36);
  vexMotorPositionReset(18);
  Drive1_DW.obj_mh.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Wheel# 2' */
  Drive1_DW.obj_f.matlabCodegenIsDeleted = false;
  Drive1_DW.objisempty_e = true;
  Drive1_DW.obj_f.isInitialized = 1;
  vexMotorBrakeModeSet(12, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(12, kMotorGearSet_36);
  vexMotorPositionReset(12);
  Drive1_DW.obj_f.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Wheel# 3' */
  Drive1_DW.obj_l.matlabCodegenIsDeleted = false;
  Drive1_DW.objisempty_o = true;
  Drive1_DW.obj_l.isInitialized = 1;
  vexMotorBrakeModeSet(2, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(2, kMotorGearSet_36);
  vexMotorPositionReset(2);
  Drive1_DW.obj_l.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Wheel# 4//5' */
  Drive1_DW.obj_h.matlabCodegenIsDeleted = false;
  Drive1_DW.objisempty_n = true;
  Drive1_DW.obj_h.isInitialized = 1;
  vexMotorBrakeModeSet(0, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(0, kMotorGearSet_36);
  vexMotorPositionReset(0);
  Drive1_DW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/conveyor belt' */
  Drive1_DW.obj_m.matlabCodegenIsDeleted = false;
  Drive1_DW.objisempty_b = true;
  Drive1_DW.obj_m.isInitialized = 1;
  vexMotorBrakeModeSet(3, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(3, kMotorGearSet_36);
  vexMotorPositionReset(3);
  Drive1_DW.obj_m.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/intake ' */
  Drive1_DW.obj.matlabCodegenIsDeleted = false;
  Drive1_DW.objisempty = true;
  Drive1_DW.obj.isInitialized = 1;
  vexMotorBrakeModeSet(19, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(19, kMotorGearSet_36);
  vexMotorPositionReset(19);
  Drive1_DW.obj.isSetupComplete = true;
  Drive1_PrevZCX.Chart_Trig_ZCE[0] = UNINITIALIZED_ZCSIG;
  Drive1_PrevZCX.Chart_Trig_ZCE[1] = UNINITIALIZED_ZCSIG;
  Drive1_PrevZCX.Chart1_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* SystemInitialize for Chart: '<Root>/Chart1' */
  Drive1_DW.is_active_c1_Drive1 = 0U;
  Drive1_DW.is_c1_Drive1 = Drive1_IN_NO_ACTIVE_CHILD;
  Drive1_B.v = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Drive1_DW.is_active_c3_Drive1 = 0U;
  Drive1_DW.is_c3_Drive1 = Drive1_IN_NO_ACTIVE_CHILD;
  Drive1_B.v_j = 0.0;
  Drive1_B.v3 = 0.0;
}

/* Model terminate function */
void Drive1_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Left Motor' */
  if (!Drive1_DW.obj_g.matlabCodegenIsDeleted) {
    Drive1_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((Drive1_DW.obj_g.isInitialized == 1) && Drive1_DW.obj_g.isSetupComplete)
    {
      vexMotorPositionReset(10);
      vexMotorVelocitySet(10, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Left Motor' */

  /* Terminate for MATLABSystem: '<Root>/Right Motor' */
  if (!Drive1_DW.obj_hv.matlabCodegenIsDeleted) {
    Drive1_DW.obj_hv.matlabCodegenIsDeleted = true;
    if ((Drive1_DW.obj_hv.isInitialized == 1) &&
        Drive1_DW.obj_hv.isSetupComplete) {
      vexMotorPositionReset(11);
      vexMotorVelocitySet(11, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Right Motor' */

  /* Terminate for MATLABSystem: '<Root>/Wheel# 1' */
  if (!Drive1_DW.obj_mh.matlabCodegenIsDeleted) {
    Drive1_DW.obj_mh.matlabCodegenIsDeleted = true;
    if ((Drive1_DW.obj_mh.isInitialized == 1) &&
        Drive1_DW.obj_mh.isSetupComplete) {
      vexMotorPositionReset(18);
      vexMotorVelocitySet(18, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Wheel# 1' */

  /* Terminate for MATLABSystem: '<Root>/Wheel# 2' */
  if (!Drive1_DW.obj_f.matlabCodegenIsDeleted) {
    Drive1_DW.obj_f.matlabCodegenIsDeleted = true;
    if ((Drive1_DW.obj_f.isInitialized == 1) && Drive1_DW.obj_f.isSetupComplete)
    {
      vexMotorPositionReset(12);
      vexMotorVelocitySet(12, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Wheel# 2' */

  /* Terminate for MATLABSystem: '<Root>/Wheel# 3' */
  if (!Drive1_DW.obj_l.matlabCodegenIsDeleted) {
    Drive1_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((Drive1_DW.obj_l.isInitialized == 1) && Drive1_DW.obj_l.isSetupComplete)
    {
      vexMotorPositionReset(2);
      vexMotorVelocitySet(2, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Wheel# 3' */

  /* Terminate for MATLABSystem: '<Root>/Wheel# 4//5' */
  if (!Drive1_DW.obj_h.matlabCodegenIsDeleted) {
    Drive1_DW.obj_h.matlabCodegenIsDeleted = true;
    if ((Drive1_DW.obj_h.isInitialized == 1) && Drive1_DW.obj_h.isSetupComplete)
    {
      vexMotorPositionReset(0);
      vexMotorVelocitySet(0, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Wheel# 4//5' */

  /* Terminate for MATLABSystem: '<Root>/conveyor belt' */
  if (!Drive1_DW.obj_m.matlabCodegenIsDeleted) {
    Drive1_DW.obj_m.matlabCodegenIsDeleted = true;
    if ((Drive1_DW.obj_m.isInitialized == 1) && Drive1_DW.obj_m.isSetupComplete)
    {
      vexMotorPositionReset(3);
      vexMotorVelocitySet(3, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/conveyor belt' */

  /* Terminate for MATLABSystem: '<Root>/intake ' */
  if (!Drive1_DW.obj.matlabCodegenIsDeleted) {
    Drive1_DW.obj.matlabCodegenIsDeleted = true;
    if ((Drive1_DW.obj.isInitialized == 1) && Drive1_DW.obj.isSetupComplete) {
      vexMotorPositionReset(19);
      vexMotorVelocitySet(19, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/intake ' */
}
