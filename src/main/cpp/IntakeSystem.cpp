#include <IntakeSystem.h>

IntakeSystem::IntakeSystem(){
        front = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(13);
        left = new Solenoid (00);
        right = new Solenoid (01);
}

void IntakeSystem::RunIntakeForward(float power){
    front -> Set(power);
}

void IntakeSystem::RunIntakeBackward(float power){
    front -> Set(-power);
}

void IntakeSystem::IntakeDrop(){
    left -> Set(true);
    right -> Set(true);
    Wait(0.5);
    left -> Set(false);
    right -> Set(false);
}
