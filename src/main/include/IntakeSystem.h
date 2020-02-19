#pragma once
#include <ctre/Phoenix.h>
#include <frc/Solenoid.h>

class IntakeSystem{

private:
ctre::phoenix::motorcontrol::can::WPI_TalonSRX *front;
frc::Solenoid *left;
frc::Solenoid *right;

public:
IntakeSystem();
void RunIntakeForward(float power);
void RunIntakeBackward(float power);
void IntakeDrop();
};
