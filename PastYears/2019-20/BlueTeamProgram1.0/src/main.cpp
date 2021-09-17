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
  motor_group   intake(left_intake, right_intake);
  int rampPosition = 0;
  // Initializing Robot Configuration. DO NOT REMOVE!
  while (true) {
    vexcodeInit();

    // intake controlls 
    //    button B -> load intake 
    //    button y -> unload 
    //    button A -> slowly release 
    if (Controller1.ButtonB.pressing()) {
      intake.spin( forward, 100, percent );
    }else if (Controller1.ButtonY.pressing()){
      intake.spin( reverse, 100, percent );
    }else if (Controller1.ButtonA.pressing()){
      intake.spin( reverse, 10, percent );
    }else{
      intake.stop();
    }


    // ramp controls 
    if (Controller1.ButtonR1.pressing()) {
      ramp.spin( reverse, 100, percent );
    } else if (Controller1.ButtonR2.pressing()) {
      ramp.spin( forward, 100, percent );
    } else {
      ramp.stop();
    }

  }
}

