#include "Robot.h"

Robot::Robot():
tankdrive(0),
intake(),
climber()
{
dash -> init();
}


void Robot::RobotInit() {
    stick1 = new OECJoystick(0);
    stick2 = new OECJoystick(1);
    stick3 = new OECJoystick(2);
    driverstation = new OECJoystick(3);
}

void Robot::AutonomousInit() {
    int AutoPathNumber = 0;

    switch(AutoPathNumber){
        case 0: //Right path - Shoot 3 and get 3 from trench
            //Shooting sequence here
            //Start intake
            tankdrive.AutoDriveGyro(195.0, 0.5, 5.0);
            Wait(0.5);
            tankdrive.AutoDriveGyro(195.0, -0.5, 5.0);
            //Stop intake
            //Shooting sequence here
            break;
        case 1:
            //Shooting sequence here
            tankdrive.AutoDriveGyro(100.0, 0.5, 2.5);
            //Start intake
            tankdrive.AutoTurnGyro(67.5, 0.5, 1.5);
            tankdrive.AutoDriveGyro(24.0, 0.5, 1.5);
            Wait(0.5);
            tankdrive.AutoDriveGyro(24.0, -0.5, 1.5);
            tankdrive.AutoTurnGyro(-67.5, 0.5, 1.5);
            //Stop intake
            //Shooting sequence here
            break;
    }
}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {

//Intake System Code
//Intake Speed
intakespeed = (stick3 -> GetZ()-1)/2;
dash -> PutNumber("Intake Speed: ", intakespeed * -100);
//Intake Run
if (stick3 -> GetButton(2)){
intake.RunIntakeForward(intakespeed);
}
//Only give values between 0 and 1 -> the variable it goes into already has a negative in it
if (stick3 -> GetButton(3)){
    intake.RunIntakeBackward(intakespeed);
}


//Climber Code



}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}



#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
