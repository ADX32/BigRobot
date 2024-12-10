#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
digital_out MOGO = digital_out(Brain.ThreeWirePort.A);
motor IntakeMotorA = motor(PORT9, ratio18_1, true);
motor IntakeMotorB = motor(PORT8, ratio18_1, false);
motor_group Intake = motor_group(IntakeMotorA, IntakeMotorB);
motor HookMotorA = motor(PORT18, ratio18_1, true);
motor HookMotorB = motor(PORT12, ratio18_1, false);
motor_group Hook = motor_group(HookMotorA, HookMotorB);
motor L_Top = motor(PORT20, ratio18_1, false);
motor L_Back = motor(PORT16, ratio18_1, true);
motor L_Mid = motor(PORT17, ratio18_1, true);
motor L_Front = motor(PORT19, ratio18_1, true);
motor R_Top = motor(PORT14, ratio18_1, true);
motor R_Front = motor(PORT10, ratio18_1, false);
motor R_Back = motor(PORT13, ratio18_1, false);
motor R_Mid = motor(PORT15, ratio18_1, false);
motor Arm = motor(PORT11, ratio18_1, true);
inertial Inertial = inertial(PORT21);
rotation RotationSensor = rotation(PORT4, true);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}