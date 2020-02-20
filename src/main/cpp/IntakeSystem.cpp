#include <IntakeSystem.h>

IntakeSystem::IntakeSystem(){
        front = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(13);
        left = new frc::Solenoid (00);
        right = new frc::Solenoid (01);
}

void IntakeSystem::RunIntakeForward(float power){
    front -> Set(power);
}

void IntakeSystem::RunIntakeBackward(float power){
    front -> Set(-power);
}

void IntakeSystem::SetZero(){
    front -> Set(0.0);
}

void IntakeSystem::IntakeDrop(){
    left -> Set(true);
    right -> Set(true);
    frc::Wait(0.5);
    left -> Set(false);
    right -> Set(false);
}
