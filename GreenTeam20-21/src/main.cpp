/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2            
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
// competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  Drivetrain.driveFor(forward, 20, inches);
  wait(1, seconds);
  Drivetrain.turnFor(90, degrees);
  wait(1, seconds);
  Drivetrain.driveFor(forward, 20, inches);
  wait(1, seconds);
  Drivetrain.turnFor(-90, degrees);
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  bool intakeOn = false;

  while (true) {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.
    

    // each joystick controlls a diffrent motor:
    // int axis3Position = Controller1.Axis3.position();
    // if (abs(axis3Position) > 5){
    //   LeftDriveSmart.setVelocity(axis3Position, percent);
    //   LeftDriveSmart.spin(forward);
    // } else {
    //   LeftDriveSmart.stop();
    // }

    // // ties the right joystick to the rignt wheels
    // int axis2Position = Controller1.Axis2.position();
    // if (abs(axis2Position) > 5){
    //   RightDriveSmart.setVelocity(axis2Position, percent);
    //   RightDriveSmart.spin(forward);
    // } else {
    //   RightDriveSmart.stop();
    // }

    int axis4Position = Controller1.Axis4.position();
    int axis3Position = Controller1.Axis3.position();

    if (abs(axis4Position) > 5 || abs(axis3Position) > 5){
      Brain.Screen.print("Robot moving");
      Brain.Screen.newLine();


      int rightVel = (axis3Position - (axis4Position/2))/2;
      RightDriveSmart.setVelocity(rightVel, percent);
      RightDriveSmart.spin(forward);

      int leftVel = (axis3Position + (axis4Position/2))/2;
      LeftDriveSmart.setVelocity(leftVel, percent);
      LeftDriveSmart.spin(forward);
    } else {
      Drivetrain.stop();
    }

    // intake togle (press it once and its on, again and its off)
    // connected to port 3
    if (Controller1.ButtonL1.pressing()){
      if (intakeOn){
        Brain.Screen.print("Intake off");
        Brain.Screen.newLine();
        Intake.stop();
        intakeOn = false;
      } else {
        Brain.Screen.print("Intake on");
        Brain.Screen.newLine();
        Intake.setVelocity(50, percent);
        Intake.spin(forward);
        intakeOn = true;
      }
      while (Controller1.ButtonL1.pressing()){
      }
    }

    bool IntakeUp = false;
    if (Controller1.ButtonL2.pressing()){
      if (IntakeUp){
        Brain.Screen.print("intake down");
        Brain.Screen.newLine();
        Intake.setVelocity(50, percent);
        Intake.spinFor(reverse, 180, degrees);
        IntakeUp = false;
      } else {
        Brain.Screen.print("intake up");
        Brain.Screen.newLine();
        Intake.setVelocity(50, percent);
        Intake.spinFor(forward, 180, degrees);
        IntakeUp = true;
      }
    }


    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}
//
// Main will set up the competition functions and callbacks.
//
int main() {
  Brain.Screen.clearScreen();
  Brain.Screen.print("GreenProgram running");
  Brain.Screen.newLine();

  // Set up callbacks for autonomous and driver control periods.

  // uncomment these for competitions do not forget to uncomment the line 22
  // Competition.autonomous(autonomous);
  // Competition.drivercontrol(usercontrol);

  //comment these for competitions:
  autonomous();
  usercontrol();

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
