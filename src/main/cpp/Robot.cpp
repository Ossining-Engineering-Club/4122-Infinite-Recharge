#include "Robot.h"

Robot::Robot():
tankdrive(0),
intake(),
climber(),
colorwheel(),
bling(),
shooter(),
stick1(0),
stick2(1),
stick3(2),
driverstation(4)
{
dash -> init();
}


void Robot::RobotInit() {
   
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

//Driving Code


tankdrive.SetThrottle(stick1.GetZ());

double tankspeed = (stick1.GetZ()+1)/2;
dash -> PutNumber("Tankdrive Throttle: ", tankspeed);

if(stick2.GetTrigger()){
    double drivePowerDiff = (stick1.GetY() - stick2.GetY())/4.0;
    tankdrive.Drive(stick1.GetY() - drivePowerDiff, stick2.GetY()-drivePowerDiff);
}
else{
    tankdrive.Drive(stick2.GetY(), stick1.GetY());
}

/*----------------------------------------------------------*/
//                      Intake System Code

//Intake Code
if (stick3.GetButton(2)){
intake.RunIntakeForward(0.5);
bling.BlingBlue();
}
else{
    intake.SetIntakeZero();
}
//Only give values between 0 and 1 -> the variable it goes into already has a negative in it
if (stick3.GetButton(3)){
    intake.RunIntakeBackward(0.5);
    bling.BlingRed();
}
else{
    intake.SetIntakeZero();
}

//Tower Code
if (stick3.GetButton(6)){
    intake.TowerEncoderRotationForward();

}

else {
    intake.SetTowerZero();
}

if (stick3.GetButton(7)){
    intake.TowerEncoderRotationBackward();
}

else{
    intake.SetTowerZero();
}

//Override For Tower
if (stick3.GetButton(10) && stick3.GetButton(6)){
    intake.RunTowerForward(0.5);
}

else{
    intake.SetTowerZero();
}

if (stick3.GetButton(10) && stick3.GetButton(7)){
        intake.RunTowerBackward(0.5);

}

else{
    intake.SetTowerZero();
}
/*----------------------------------------------------------*/
//Climber Code

//Sending Climber Encoder to Smart Dash
double ClimberEncoderPositionVar = climber.EncoderValue();
dash -> PutNumber("Climber Get Encoder Position: ", ClimberEncoderPositionVar);

//Setting the Speed and Putting It Onto Smart Dash
//climberspeed = (stick2.GetZ()-1)/2;
//dash -> PutNumber("Climber Speed: ", climberspeed * -100);

//Sending the Climber Up and if nothing else is pressed the motor is turned off
if (stick1.GetButton(3)){
    climber.Up(climberspeed);
}
else{
    climber.ZeroClimberSpeed();
}

//Setting the Climber Down and if nothing is pressed then the motor is turned off
//Only give a Positive Value -> In the function the value is negated
if (stick1.GetButton(2)){
    climber.Down(climberspeed);
}
else{
    climber.ZeroClimberSpeed();
}

/*----------------------------------------------------------*/
//Color Wheel
//Spin Right
if (stick3.GetButton(5)){

colorwheel.SpinRight();

}
else{
    colorwheel.SetZero();
}

//Spin Left
if (stick3.GetButton(4)){
    colorwheel.SpinLeft();
}

else{
    colorwheel.SetZero();
}
/*----------------------------------------------------------*/

/*                     Shooter                              */

double shooterspeed = (stick2.GetZ()+1)/2;

if (stick3.GetTrigger()){
shooter.SpinFlywheelsOpenLoop(shooterspeed, -shooterspeed);

}

else{
    shooter.SpinFlywheelsOpenLoop(0.0,0.0);
}

if (stick3.GetButton(11)){
    shooter.FeederWheel(0.5);
}

else{
    shooter.FeederWheel(0.0);
}

}


void Robot::TestInit() {}
void Robot::TestPeriodic() {}



#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
