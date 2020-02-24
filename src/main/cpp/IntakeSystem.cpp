#include <IntakeSystem.h>

IntakeSystem::IntakeSystem()
{
        intakemotor = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(14);
        towermotor = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(15);
        left = new frc::Solenoid (00);
        right = new frc::Solenoid (01);
        towerencoder = new frc::Encoder(2,3, false, frc::CounterBase::EncodingType::k4X);
}
/*----------------------------------------------------------*/
void IntakeSystem::RunIntakeForward(float power){
    intakemotor -> Set(power);
}

void IntakeSystem::RunIntakeBackward(float power){
    intakemotor -> Set(-power);
}

void IntakeSystem::SetIntakeZero(){
    intakemotor -> Set(0.0);
}
/*----------------------------------------------------------*/
void IntakeSystem::RunTowerForward(float power){
    towermotor -> Set(power);
}

void IntakeSystem::RunTowerBackward(float power){
    towermotor -> Set(-power);
}

void IntakeSystem::SetTowerZero(){
    towermotor -> Set(0.0);
}

void IntakeSystem::TowerEncoderRotationForward(){

}

void IntakeSystem::TowerEncoderRotationBackward(){

}

/*----------------------------------------------------------*/
void IntakeSystem::IntakeDrop(){
    left -> Set(true);
    right -> Set(true);
    frc::Wait(0.5);
    left -> Set(false);
    right -> Set(false);
/*----------------------------------------------------------*/

}
