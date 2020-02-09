#pragma once

#include <Robot.h>

class Climber{

ctre::phoenix::motorcontrol::can::WPI_TalonFX * climber;

public:
Climber();
void ClimberUp(int power);
void ClimberDown(int power);
void ClimberRestriction();
};