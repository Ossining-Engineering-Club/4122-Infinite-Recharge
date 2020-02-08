#pragma once

#include <Robot.h>
#include <ctre/Phoenix.h>
class Intake{

ctre::phoenix::motorcontrol::can::WPI_TalonSRX * front;
ctre::phoenix::motorcontrol::can::WPI_TalonSRX * back;

Solenoid * solenoidleft;
Solenoid * solenoidright;

Intake();
void RunIntake(double power);
void IntakeDrop();
};
