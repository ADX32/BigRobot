using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern digital_out MOGO;
extern motor_group Intake;
extern motor_group Hook;
extern motor L_Top;
extern motor L_Back;
extern motor L_Mid;
extern motor L_Front;
extern motor R_Top;
extern motor R_Front;
extern motor R_Back;
extern motor R_Mid;
extern motor Arm;
extern inertial Inertial;
extern rotation RotationSensor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );