#pragma once
#include <Robot.h>

#include <ctre/Phoenix.h>

#include <frc/Solenoid.h>

class Intake{

private:

ctre::phoenix::motorcontrol::can::WPI_TalonSRX *front;

Solenoid *left;
Solenoid *right;

public:
Intake();
void RunIntakeForward(double power);
void RunIntakeBackward(double power);
void IntakeDrop();
};
