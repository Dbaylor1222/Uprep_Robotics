/*
 * driver1.c
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

#include "driver1.h"
#include "driver1_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define driver1_IN_NO_ACTIVE_CHILD     ((uint8_T)0U)
#define driver1_IN_Out_Back            ((uint8_T)1U)
#define driver1_IN_Out_Front           ((uint8_T)2U)
#define driver1_IN_stop                ((uint8_T)3U)

/* Block states (default storage) */
DW_driver1_T driver1_DW;

/* Real-time model */
static RT_MODEL_driver1_T driver1_M_;
RT_MODEL_driver1_T *const driver1_M = &driver1_M_;

/* Model step function */
void driver1_step(void)
{
  V5_ControllerStatus controller_status;
  real_T rtb_ManualSwitch_idx_0;
  real_T rtb_ManualSwitch_idx_13;
  real_T rtb_ManualSwitch_idx_14;
  real_T rtb_ManualSwitch_idx_15;
  real_T rtb_lMtr;
  real_T rtb_v3;

  /* MATLABSystem: '<S8>/Joystick Channel 3' */
  rtb_lMtr = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_lMtr = vexControllerGet(0.0, AnaLeftY);
  }

  /* MATLABSystem: '<S8>/Joystick  Channel 4' */
  rtb_v3 = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_v3 = vexControllerGet(0.0, AnaLeftX);
  }

  /* End of MATLABSystem: '<S8>/Joystick  Channel 4' */

  /* MATLABSystem: '<S8>/Joystick  Channel 2' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, AnaRightY);
  }

  /* End of MATLABSystem: '<S8>/Joystick  Channel 2' */

  /* MATLABSystem: '<S8>/Joystick Channel 1' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, AnaRightX);
  }

  /* End of MATLABSystem: '<S8>/Joystick Channel 1' */

  /* MATLABSystem: '<S8>/UP' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button7U);
  }

  /* End of MATLABSystem: '<S8>/UP' */

  /* MATLABSystem: '<S8>/DOWN' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button7D);
  }

  /* End of MATLABSystem: '<S8>/DOWN' */

  /* MATLABSystem: '<S8>/LEFT' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button7L);
  }

  /* End of MATLABSystem: '<S8>/LEFT' */

  /* MATLABSystem: '<S8>/RIGHT' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button7R);
  }

  /* End of MATLABSystem: '<S8>/RIGHT' */

  /* MATLABSystem: '<S8>/X' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button8U);
  }

  /* End of MATLABSystem: '<S8>/X' */

  /* MATLABSystem: '<S8>/B' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button8D);
  }

  /* End of MATLABSystem: '<S8>/B' */

  /* MATLABSystem: '<S8>/Y' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button8L);
  }

  /* End of MATLABSystem: '<S8>/Y' */

  /* MATLABSystem: '<S8>/A' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button8R);
  }

  /* End of MATLABSystem: '<S8>/A' */

  /* MATLABSystem: '<S8>/L2' */
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    vexControllerGet(0.0, Button5D);
  }

  /* End of MATLABSystem: '<S8>/L2' */

  /* MATLABSystem: '<S8>/L1' */
  rtb_ManualSwitch_idx_13 = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_ManualSwitch_idx_13 = vexControllerGet(0.0, Button5U);
  }

  /* End of MATLABSystem: '<S8>/L1' */

  /* MATLABSystem: '<S8>/R2' */
  rtb_ManualSwitch_idx_14 = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_ManualSwitch_idx_14 = vexControllerGet(0.0, Button6D);
  }

  /* End of MATLABSystem: '<S8>/R2' */

  /* MATLABSystem: '<S8>/R1' */
  rtb_ManualSwitch_idx_15 = 0.0;
  controller_status = vexControllerConnectionStatusGet(0.0);
  if (controller_status != kV5ControllerOffline) {
    rtb_ManualSwitch_idx_15 = vexControllerGet(0.0, Button6U);
  }

  /* End of MATLABSystem: '<S8>/R1' */

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<S7>/Joystick 3 Channel'
   *  Constant: '<S7>/Joystick 4 Channel'
   *  Constant: '<S7>/L1'
   *  Constant: '<S7>/R1'
   *  Constant: '<S7>/R2'
   *  MATLABSystem: '<S8>/Joystick Channel 3'
   */
  if (driver1_P.ManualSwitch_CurrentSetting == 1) {
    rtb_ManualSwitch_idx_0 = driver1_P.Joystick3Channel_Value;
    rtb_v3 = driver1_P.Joystick4Channel_Value;
    rtb_ManualSwitch_idx_13 = driver1_P.L1_Value;
    rtb_ManualSwitch_idx_14 = driver1_P.R2_Value;
    rtb_ManualSwitch_idx_15 = driver1_P.R1_Value;
  } else {
    rtb_ManualSwitch_idx_0 = rtb_lMtr;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* MATLAB Function: '<S5>/MATLAB Function' */
  /* MATLAB Function 'Arcade Module/MATLAB Function': '<S6>:1' */
  /* '<S6>:1:4' */
  rtb_lMtr = rtb_ManualSwitch_idx_0 + rtb_v3;
  if (!(rtb_lMtr > -127.0)) {
    rtb_lMtr = -127.0;
  }

  if (!(rtb_lMtr < 127.0)) {
    rtb_lMtr = 127.0;
  }

  /* MATLABSystem: '<Root>/Left Motor' */
  /* '<S6>:1:5' */
  if (rtb_lMtr > 100.0) {
    rtb_lMtr = 100.0;
  } else if (rtb_lMtr < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 10);
  vexMotorVelocitySet(10, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/Left Motor' */

  /* MATLAB Function: '<S5>/MATLAB Function' */
  rtb_lMtr = rtb_ManualSwitch_idx_0 - rtb_v3;
  if (!(rtb_lMtr > -127.0)) {
    rtb_lMtr = -127.0;
  }

  if (!(rtb_lMtr < 127.0)) {
    rtb_lMtr = 127.0;
  }

  /* Gain: '<Root>/Gain' */
  rtb_lMtr *= driver1_P.Gain_Gain;

  /* MATLABSystem: '<Root>/Right Motor' */
  if (rtb_lMtr > 100.0) {
    rtb_lMtr = 100.0;
  } else if (rtb_lMtr < -100.0) {
    rtb_lMtr = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 11);
  vexMotorVelocitySet(11, rtb_lMtr);

  /* End of MATLABSystem: '<Root>/Right Motor' */

  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  if (driver1_DW.is_active_c3_driver1 == 0U) {
    /* Entry: Chart */
    driver1_DW.is_active_c3_driver1 = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:4' */
    driver1_DW.is_c3_driver1 = driver1_IN_stop;

    /* Entry 'stop': '<S1>:3' */
    rtb_lMtr = 0.0;
    rtb_v3 = 0.0;
  } else {
    switch (driver1_DW.is_c3_driver1) {
     case driver1_IN_Out_Back:
      rtb_lMtr = 100.0;
      rtb_v3 = -100.0;

      /* During 'Out_Back': '<S1>:5' */
      if (rtb_ManualSwitch_idx_14 == 1.0) {
        /* Transition: '<S1>:17' */
        driver1_DW.is_c3_driver1 = driver1_IN_stop;

        /* Entry 'stop': '<S1>:3' */
        rtb_lMtr = 0.0;
        rtb_v3 = 0.0;
      } else if (rtb_ManualSwitch_idx_15 == 1.0) {
        /* Transition: '<S1>:19' */
        driver1_DW.is_c3_driver1 = driver1_IN_Out_Front;

        /* Entry 'Out_Front': '<S1>:6' */
        rtb_v3 = 100.0;
      }
      break;

     case driver1_IN_Out_Front:
      rtb_lMtr = 100.0;
      rtb_v3 = 100.0;

      /* During 'Out_Front': '<S1>:6' */
      if (rtb_ManualSwitch_idx_15 == 1.0) {
        /* Transition: '<S1>:16' */
        driver1_DW.is_c3_driver1 = driver1_IN_stop;

        /* Entry 'stop': '<S1>:3' */
        rtb_lMtr = 0.0;
        rtb_v3 = 0.0;
      } else if (rtb_ManualSwitch_idx_14 == 1.0) {
        /* Transition: '<S1>:18' */
        driver1_DW.is_c3_driver1 = driver1_IN_Out_Back;

        /* Entry 'Out_Back': '<S1>:5' */
        rtb_v3 = -100.0;
      }
      break;

     default:
      rtb_lMtr = 0.0;
      rtb_v3 = 0.0;

      /* During 'stop': '<S1>:3' */
      if (rtb_ManualSwitch_idx_15 == 1.0) {
        /* Transition: '<S1>:9' */
        driver1_DW.is_c3_driver1 = driver1_IN_Out_Front;

        /* Entry 'Out_Front': '<S1>:6' */
        rtb_lMtr = 100.0;
        rtb_v3 = 100.0;
      } else if (rtb_ManualSwitch_idx_14 == 1.0) {
        /* Transition: '<S1>:14' */
        driver1_DW.is_c3_driver1 = driver1_IN_Out_Back;

        /* Entry 'Out_Back': '<S1>:5' */
        rtb_lMtr = 100.0;
        rtb_v3 = -100.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLABSystem: '<Root>/Wheel# 1' */
  DevicePresent(kDeviceTypeMotorSensor, 18);
  vexMotorVelocitySet(18, rtb_lMtr);

  /* Gain: '<Root>/Gain3' */
  rtb_ManualSwitch_idx_14 = driver1_P.Gain3_Gain * rtb_lMtr;

  /* MATLABSystem: '<Root>/Wheel# 2' */
  if (rtb_ManualSwitch_idx_14 > 100.0) {
    rtb_ManualSwitch_idx_14 = 100.0;
  } else if (rtb_ManualSwitch_idx_14 < -100.0) {
    rtb_ManualSwitch_idx_14 = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 12);
  vexMotorVelocitySet(12, rtb_ManualSwitch_idx_14);

  /* End of MATLABSystem: '<Root>/Wheel# 2' */

  /* Gain: '<Root>/Gain4' */
  rtb_v3 *= driver1_P.Gain4_Gain;

  /* MATLABSystem: '<Root>/Wheel# 3' */
  if (rtb_v3 > 100.0) {
    rtb_v3 = 100.0;
  } else if (rtb_v3 < -100.0) {
    rtb_v3 = -100.0;
  }

  DevicePresent(kDeviceTypeMotorSensor, 2);
  vexMotorVelocitySet(2, rtb_v3);

  /* End of MATLABSystem: '<Root>/Wheel# 3' */

  /* MATLABSystem: '<Root>/Wheel# 4//5' */
  DevicePresent(kDeviceTypeMotorSensor, 0);
  vexMotorVelocitySet(0, rtb_lMtr);

  /* MATLABSystem: '<Root>/conveyor belt' */
  DevicePresent(kDeviceTypeMotorSensor, 3);
  vexMotorVelocitySet(3, rtb_lMtr);

  /* Gain: '<Root>/Gain1' incorporates:
   *  Gain: '<S2>/Gain2'
   */
  rtb_lMtr = driver1_P.Gain2_Gain * rtb_ManualSwitch_idx_13 *
    driver1_P.Gain1_Gain;

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
void driver1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(driver1_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&driver1_DW, 0,
                sizeof(DW_driver1_T));

  /* Start for MATLABSystem: '<S8>/Joystick Channel 3' */
  driver1_DW.objisempty_ct = true;
  driver1_DW.obj_oi.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/Joystick  Channel 4' */
  driver1_DW.objisempty_jn = true;
  driver1_DW.obj_bw.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/Joystick  Channel 2' */
  driver1_DW.objisempty_kl = true;
  driver1_DW.obj_gl.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/Joystick Channel 1' */
  driver1_DW.objisempty_i = true;
  driver1_DW.obj_od.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/UP' */
  driver1_DW.objisempty_ew = true;
  driver1_DW.obj_n.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/DOWN' */
  driver1_DW.objisempty_cw = true;
  driver1_DW.obj_m4.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/LEFT' */
  driver1_DW.objisempty_d = true;
  driver1_DW.obj_o.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/RIGHT' */
  driver1_DW.objisempty_g = true;
  driver1_DW.obj_a.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/X' */
  driver1_DW.objisempty_l = true;
  driver1_DW.obj_p.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/B' */
  driver1_DW.objisempty_id = true;
  driver1_DW.obj_bv.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/Y' */
  driver1_DW.objisempty_f = true;
  driver1_DW.obj_b.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/A' */
  driver1_DW.objisempty_lf = true;
  driver1_DW.obj_d.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/L2' */
  driver1_DW.objisempty_nd = true;
  driver1_DW.obj_ov.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/L1' */
  driver1_DW.objisempty_br = true;
  driver1_DW.obj_lh.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/R2' */
  driver1_DW.objisempty_k = true;
  driver1_DW.obj_px.isInitialized = 1;

  /* Start for MATLABSystem: '<S8>/R1' */
  driver1_DW.objisempty_c = true;
  driver1_DW.obj_c.isInitialized = 1;

  /* Start for MATLABSystem: '<Root>/Left Motor' */
  driver1_DW.obj_g.matlabCodegenIsDeleted = false;
  driver1_DW.objisempty_b5 = true;
  driver1_DW.obj_g.isInitialized = 1;
  vexMotorBrakeModeSet(10, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(10, kMotorGearSet_36);
  vexMotorPositionReset(10);
  driver1_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Right Motor' */
  driver1_DW.obj_hv.matlabCodegenIsDeleted = false;
  driver1_DW.objisempty_a = true;
  driver1_DW.obj_hv.isInitialized = 1;
  vexMotorBrakeModeSet(11, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(11, kMotorGearSet_36);
  vexMotorPositionReset(11);
  driver1_DW.obj_hv.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Wheel# 1' */
  driver1_DW.obj_mh.matlabCodegenIsDeleted = false;
  driver1_DW.objisempty_j = true;
  driver1_DW.obj_mh.isInitialized = 1;
  vexMotorBrakeModeSet(18, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(18, kMotorGearSet_36);
  vexMotorPositionReset(18);
  driver1_DW.obj_mh.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Wheel# 2' */
  driver1_DW.obj_f.matlabCodegenIsDeleted = false;
  driver1_DW.objisempty_e = true;
  driver1_DW.obj_f.isInitialized = 1;
  vexMotorBrakeModeSet(12, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(12, kMotorGearSet_36);
  vexMotorPositionReset(12);
  driver1_DW.obj_f.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Wheel# 3' */
  driver1_DW.obj_l.matlabCodegenIsDeleted = false;
  driver1_DW.objisempty_o = true;
  driver1_DW.obj_l.isInitialized = 1;
  vexMotorBrakeModeSet(2, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(2, kMotorGearSet_36);
  vexMotorPositionReset(2);
  driver1_DW.obj_l.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Wheel# 4//5' */
  driver1_DW.obj_h.matlabCodegenIsDeleted = false;
  driver1_DW.objisempty_n = true;
  driver1_DW.obj_h.isInitialized = 1;
  vexMotorBrakeModeSet(0, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(0, kMotorGearSet_36);
  vexMotorPositionReset(0);
  driver1_DW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/conveyor belt' */
  driver1_DW.obj_m.matlabCodegenIsDeleted = false;
  driver1_DW.objisempty_b = true;
  driver1_DW.obj_m.isInitialized = 1;
  vexMotorBrakeModeSet(3, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(3, kMotorGearSet_36);
  vexMotorPositionReset(3);
  driver1_DW.obj_m.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/intake ' */
  driver1_DW.obj.matlabCodegenIsDeleted = false;
  driver1_DW.objisempty = true;
  driver1_DW.obj.isInitialized = 1;
  vexMotorBrakeModeSet(19, kV5MotorBrakeModeCoast);
  vexMotorGearingSet(19, kMotorGearSet_36);
  vexMotorPositionReset(19);
  driver1_DW.obj.isSetupComplete = true;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  driver1_DW.is_active_c3_driver1 = 0U;
  driver1_DW.is_c3_driver1 = driver1_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void driver1_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Left Motor' */
  if (!driver1_DW.obj_g.matlabCodegenIsDeleted) {
    driver1_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((driver1_DW.obj_g.isInitialized == 1) &&
        driver1_DW.obj_g.isSetupComplete) {
      vexMotorPositionReset(10);
      vexMotorVelocitySet(10, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Left Motor' */

  /* Terminate for MATLABSystem: '<Root>/Right Motor' */
  if (!driver1_DW.obj_hv.matlabCodegenIsDeleted) {
    driver1_DW.obj_hv.matlabCodegenIsDeleted = true;
    if ((driver1_DW.obj_hv.isInitialized == 1) &&
        driver1_DW.obj_hv.isSetupComplete) {
      vexMotorPositionReset(11);
      vexMotorVelocitySet(11, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Right Motor' */

  /* Terminate for MATLABSystem: '<Root>/Wheel# 1' */
  if (!driver1_DW.obj_mh.matlabCodegenIsDeleted) {
    driver1_DW.obj_mh.matlabCodegenIsDeleted = true;
    if ((driver1_DW.obj_mh.isInitialized == 1) &&
        driver1_DW.obj_mh.isSetupComplete) {
      vexMotorPositionReset(18);
      vexMotorVelocitySet(18, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Wheel# 1' */

  /* Terminate for MATLABSystem: '<Root>/Wheel# 2' */
  if (!driver1_DW.obj_f.matlabCodegenIsDeleted) {
    driver1_DW.obj_f.matlabCodegenIsDeleted = true;
    if ((driver1_DW.obj_f.isInitialized == 1) &&
        driver1_DW.obj_f.isSetupComplete) {
      vexMotorPositionReset(12);
      vexMotorVelocitySet(12, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Wheel# 2' */

  /* Terminate for MATLABSystem: '<Root>/Wheel# 3' */
  if (!driver1_DW.obj_l.matlabCodegenIsDeleted) {
    driver1_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((driver1_DW.obj_l.isInitialized == 1) &&
        driver1_DW.obj_l.isSetupComplete) {
      vexMotorPositionReset(2);
      vexMotorVelocitySet(2, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Wheel# 3' */

  /* Terminate for MATLABSystem: '<Root>/Wheel# 4//5' */
  if (!driver1_DW.obj_h.matlabCodegenIsDeleted) {
    driver1_DW.obj_h.matlabCodegenIsDeleted = true;
    if ((driver1_DW.obj_h.isInitialized == 1) &&
        driver1_DW.obj_h.isSetupComplete) {
      vexMotorPositionReset(0);
      vexMotorVelocitySet(0, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Wheel# 4//5' */

  /* Terminate for MATLABSystem: '<Root>/conveyor belt' */
  if (!driver1_DW.obj_m.matlabCodegenIsDeleted) {
    driver1_DW.obj_m.matlabCodegenIsDeleted = true;
    if ((driver1_DW.obj_m.isInitialized == 1) &&
        driver1_DW.obj_m.isSetupComplete) {
      vexMotorPositionReset(3);
      vexMotorVelocitySet(3, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/conveyor belt' */

  /* Terminate for MATLABSystem: '<Root>/intake ' */
  if (!driver1_DW.obj.matlabCodegenIsDeleted) {
    driver1_DW.obj.matlabCodegenIsDeleted = true;
    if ((driver1_DW.obj.isInitialized == 1) && driver1_DW.obj.isSetupComplete) {
      vexMotorPositionReset(19);
      vexMotorVelocitySet(19, 0.0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/intake ' */
}
