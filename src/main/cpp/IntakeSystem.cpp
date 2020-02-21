#include <IntakeSystem.h>

IntakeSystem::IntakeSystem(){
        intakemotor = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(14);
        towermotor = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(15);
        left = new frc::Solenoid (00);
        right = new frc::Solenoid (01);
}

void IntakeSystem::RunIntakeForward(float power){
    intakemotor -> Set(power);
}

void IntakeSystem::RunIntakeBackward(float power){
    intakemotor -> Set(-power);
}

void IntakeSystem::SetZero(){
    intakemotor -> Set(0.0);
}

void IntakeSystem::RunIntakeForward(float power){
    towermotor -> Set(power);
}

void IntakeSystem::RunIntakeBackward(float power){
    towermotor -> Set(-power);
}

void IntakeSystem::IntakeDrop(){
    left -> Set(true);
    right -> Set(true);
    frc::Wait(0.5);
    left -> Set(false);
    right -> Set(false);
}
