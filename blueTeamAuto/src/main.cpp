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
  // Initializing Robot Configuration. DO NOT REMOVE!

  // grid lengh 23.5 inches
  vexcodeInit();
  Drivetrain.driveFor(35.25, inches); // first drive forward change number in inches  -> needs to also change the drive backwards.
  ramp.setVelocity(10, percent);
  intake.setVelocity(10, percent); // need to play with this to get speed right for setting down the blocks
  // starts spinning the ramp
  ramp.spin(fwd);
  intake.spin(fwd);
  wait(.5, seconds); // may need to play with this to get the right time for setting down the blocks
  // stops spinning the ramp
  ramp.stop();
  intake.stop();

  Drivetrain.driveFor(-47.25, inches); // last drive backwards change number in inches to be 12 in more than the forward drive lenth.

}
