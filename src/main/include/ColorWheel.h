#pragma once

#include <Robot.h>
#include <ctre/Phoenix.h>
#include <frc/util/color.h>

using namespace frc;

class ColorWheel{

private:
//ctre::phoenix::motorcontrol::can::WPI_TalonSRX *wheel;

//rev::ColorSensorV3 * sensor;


public:
ColorWheel();
void SpinRight();
void SpinLeft();
void SetZero();
void SensorDetection();


};