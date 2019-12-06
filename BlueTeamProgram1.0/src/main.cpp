/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\dbayl                                            */
/*    Created:      Thu Nov 14 2019                                           */
/*    Description:  BLue team's driver contoll                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    12, 11
// Controller1          controller
// ramp                 motor         13
// intake_Rase_lower    motor         14
// left_intake          motor         15
// right_intake         motor         16
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  int rampPosition = 0;
  // Initializing Robot Configuration. DO NOT REMOVE!
  while (true) {
    vexcodeInit();

    if (Controller1.ButtonA.pressing()) // moves the ramp back and fourth
    {
      if (rampPosition == 0) {
        ramp.setVelocity(10, percent);
        ramp.spinFor(145, degrees);
        rampPosition = 1;
      } else {
        ramp.setVelocity(20, percent);
        ramp.spinFor(-145, degrees);
        rampPosition = 0;
      }
    }
    if (Controller1.ButtonX.pressing()) { // drops of the blocks 
      // sets the speed of the ramp lift and intake 
      ramp.setVelocity(10, percent);
      intake.setVelocity(10, percent); // need to play with this to get speed right for setting down the blocks
      // ramp.spinFor(145, degrees);
      // starts spinning the ramp
      ramp.spin(fwd);
      intake.spin(fwd);
      wait(.5, seconds);
      // stops spinning the ramp
      ramp.stop();
      intake.stop();
      //drives back and resets the ramp
      Drivetrain.driveFor(-6, inches); // may need to have intake reverse to allow to drive backwards
      ramp.setVelocity(20, percent);
      ramp.spinFor(-145, degrees);
    }
  }
}
