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
// motor intake_Rase_lower = motor(PORT1, ratio18_1, false);
motor left_intake = motor(PORT15, ratio18_1, false);
motor right_intake = motor(PORT14, ratio18_1, true);
// VEXcode generated functions
// define variables used for controlling motors based on controller inputs
bool Controller1LeftShoulderControlMotorsStopped = true;
bool Controller1RightShoulderControlMotorsStopped = true;
bool Controller1UpDownButtonsControlMotorsStopped = true;
bool DrivetrainNeedsToBeStopped_Controller1 = true;

// define a task that will handle monitoring inputs from Controller1
int rc_auto_loop_callback_Controller1() {
  // process the controller input every 20 milliseconds
  // update the motors based on the input values
  while(true) {
    // calculate the drivetrain motor velocities from the controller joystick axies
    // left = Axis3 + Axis4
    // right = Axis3 - Axis4
    int drivetrainLeftSideSpeed = Controller1.Axis3.position() + Controller1.Axis4.position();
    int drivetrainRightSideSpeed = Controller1.Axis3.position() - Controller1.Axis4.position();
    // check if the values are inside of the deadband range
    if (abs(drivetrainLeftSideSpeed) < 5 && abs(drivetrainRightSideSpeed) < 5) {
      // check if the motors have already been stopped
      if (DrivetrainNeedsToBeStopped_Controller1) {
        // stop the drive motors
        LeftDriveSmart.stop();
        RightDriveSmart.stop();
        // tell the code that the motors have been stopped
        DrivetrainNeedsToBeStopped_Controller1 = false;
      }
    } else {
      // reset the toggle so that the deadband code knows to stop the motors next time the input is in the deadband range
      DrivetrainNeedsToBeStopped_Controller1 = true;
    }
    // only tell the left drive motor to spin if the values are not in the deadband range
    if (DrivetrainNeedsToBeStopped_Controller1) {
      LeftDriveSmart.setVelocity(drivetrainLeftSideSpeed, percent);
      LeftDriveSmart.spin(forward);
    }
    // only tell the right drive motor to spin if the values are not in the deadband range
    if (DrivetrainNeedsToBeStopped_Controller1) {
      RightDriveSmart.setVelocity(drivetrainRightSideSpeed, percent);
      RightDriveSmart.spin(forward);
    }
    // check the ButtonL1/ButtonL2 status to control left_intake and right_intake
    // if (Controller1.ButtonL1.pressing()) {
    //   left_intake.spin(forward);
    //   right_intake.spin(forward);
    //   Controller1LeftShoulderControlMotorsStopped = false;
    // } else if (Controller1.ButtonL2.pressing()) {
    //   left_intake.spin(reverse);
    //   right_intake.spin(reverse);
    //   Controller1LeftShoulderControlMotorsStopped = false;
    // } else if (!Controller1LeftShoulderControlMotorsStopped) {
    //   left_intake.stop();
    //   right_intake.stop();
    //   // set the toggle so that we don't constantly tell the motor to stop when the buttons are released
    //   Controller1LeftShoulderControlMotorsStopped = true;
    // }
    // // check the ButtonR1/ButtonR2 status to control intake_Rase_lower
    // if (Controller1.ButtonR1.pressing()) {
    //   intake_Rase_lower.spin(forward);
    //   Controller1RightShoulderControlMotorsStopped = false;
    // } else if (Controller1.ButtonR2.pressing()) {
    //   intake_Rase_lower.spin(reverse);
    //   Controller1RightShoulderControlMotorsStopped = false;
    // } else if (!Controller1RightShoulderControlMotorsStopped) {
    //   intake_Rase_lower.stop();
    //   // set the toggle so that we don't constantly tell the motor to stop when the buttons are released
    //   Controller1RightShoulderControlMotorsStopped = true;
    // }
    // check the Up/Down Buttons status to control right_intake
    // if (Controller1.ButtonUp.pressing()) {
    //   right_intake.spin(forward);
    //   Controller1UpDownButtonsControlMotorsStopped = false;
    // } else if (Controller1.ButtonDown.pressing()) {
    //   right_intake.spin(reverse);
    //   Controller1UpDownButtonsControlMotorsStopped = false;
    // } else if (!Controller1UpDownButtonsControlMotorsStopped){
    //   right_intake.stop();
    //   // set the toggle so that we don't constantly tell the motor to stop when the buttons are released
    //   Controller1UpDownButtonsControlMotorsStopped = true;
    // }
    // wait before repeating the process
    wait(20, msec);
  }
  return 0;
}

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  task rc_auto_loop_task_Controller1(rc_auto_loop_callback_Controller1);
}