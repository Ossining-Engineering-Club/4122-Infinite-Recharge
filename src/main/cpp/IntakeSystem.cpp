#include <IntakeSystem.h>

Intake::Intake(){
    front = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(13);
    back = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(14);

    solenoidleft = new Solenoid (00);
    solenoidright = new Solenoid (01);

}

void Intake::RunIntake(double power){

    front -> Set(power);
    back -> Set(power);
    

}

void Intake::IntakeDrop(){
    solenoidleft -> Set(true);
    solenoidright -> Set(true);
    Wait(0.5);
    solenoidleft -> Set(false);
    solenoidright -> Set(false);
}
