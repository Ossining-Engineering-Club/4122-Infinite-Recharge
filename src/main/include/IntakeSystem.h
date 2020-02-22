#pragma once
#include <ctre/Phoenix.h>
#include <frc/Solenoid.h>
#include <frc/Timer.h>

class IntakeSystem{

private:
ctre::phoenix::motorcontrol::can::WPI_TalonSRX *intakemotor;
ctre::phoenix::motorcontrol::can::WPI_TalonSRX *towermotor;
frc::Solenoid * left;
frc::Solenoid * right;

public:
IntakeSystem();
void RunIntakeForward(float power);
void RunIntakeBackward(float power);
void RunTowerForward(float power);
void RunTowerBackward(float power);
void SetIntakeZero();
void SetTowerZero();
void IntakeDrop();
};
