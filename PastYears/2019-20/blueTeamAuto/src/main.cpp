/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\dbayl                                            */
/*    Created:      Thu Dec 05 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    12, 11          
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
    motor_group   intake(left_intake, right_intake);
  // Initializing Robot Configuration. DO NOT REMOVE!

  // grid lengh 23.5 inches
  vexcodeInit();
  Drivetrain.driveFor(-23.5, inches); // first drive forward change number in inches  -> needs to also change the drive backwards.
  Drivetrain.driveFor(47, inches); // last drive backwards change number in inches to be 12 in more than the forward drive lenth.

}


