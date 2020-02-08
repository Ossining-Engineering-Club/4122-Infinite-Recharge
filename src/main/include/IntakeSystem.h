#pragma once

#include <Robot.h>

class Intake{

ctre::phoenix::motorcontrol::can::WPI_TalonSRX * intake1;
ctre::phoenix::motorcontrol::can::WPI_TalonSRX * intake2;
Solenoid * solenoidleft;
Solenoid * solenoidright;

};
