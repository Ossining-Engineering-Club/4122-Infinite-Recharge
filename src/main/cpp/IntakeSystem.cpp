#include    <IntakeSystem.h>

Intake::Intake(){
    front = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(13);
    
    left = new Solenoid (00);
    right = new Solenoid (01);

}

void Intake::RunIntakeForward(double power){
    front -> Set(power);

}

void Intake::RunIntakeBackward(double power){
    front ->Set(power);
    
}

void Intake::IntakeDrop(){
    left -> Set(true);
    right -> Set(true);
    Wait(0.5);
    left -> Set(false);
    right -> Set(false);
}
