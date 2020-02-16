#pragma once
#include <Robot.h>
#include <ctre/Phoenix.h>
#include <Solenoid.h>

class Intake{

private:

ctre::phoenix::motorcontrol::can::WPI_TalonSRX *front;
ctre::phoenix::motorcontrol::can::WPI_TalonSRX *back;
Solenoid *left;
Solenoid *right;

public:
Intake();
void RunIntake(double power);
void IntakeDrop();
};
