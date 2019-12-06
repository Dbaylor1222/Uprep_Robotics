#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor LeftDriveSmart = motor(PORT12, ratio18_1, false);
motor RightDriveSmart = motor(PORT11, ratio18_1, true);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 130, mm, 0.6666666666666666);
controller Controller1 = controller(primary);
motor ramp = motor(PORT13, ratio18_1, true);
motor intake_Rase_lower = motor(PORT14, ratio18_1, false);
motor left_intake = motor(PORT15, ratio18_1, false);
motor right_intake = motor(PORT16, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}