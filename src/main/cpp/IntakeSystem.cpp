#include <IntakeSystem.h>

Intake::Intake(){
    intake1 = new ctre::phoneix::motorcontrol::can::WPI_TalonSRX(13);
    intake2 = new ctre::phoneix::motorcontrol::can::WPI_TalonSRX(12);
    
    solenoidleft = new Solenoid (00);
    solenoidright = new Solenoid (01);

}

void Intake::RunIntake(double power){

    intake1 -> Set(power);
    intake2 -> Set(power);
    

}

void Intake::IntakeDrop(){
    solenoidleft -> Set(true);
    solenoidright -> Set(true);
    wait(0.25);
    solenoidleft -> Set(false);
    solenoidright -> Set(false);
}
