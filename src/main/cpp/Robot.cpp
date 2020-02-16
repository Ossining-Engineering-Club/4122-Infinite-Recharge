#include "Robot.h"

Robot::Robot():
<<<<<<< HEAD
Intake()
{
dash -> init();
}

=======
tankdrive(0)
{}
>>>>>>> 3e80457c812fa17fced85671261704b670104bbe

void Robot::RobotInit() {}

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




}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}



#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
