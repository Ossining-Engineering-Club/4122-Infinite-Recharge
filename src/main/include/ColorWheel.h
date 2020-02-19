#pragma once

#include <Robot.h>
#include <ctre/Phoenix.h>
#include <frc/util/color.h>

class ColorWheel{

private:
ctre::phoenix::motorcontrol::can::WPI_TalonSRX *wheel;

rev::ColorSensorV3 * sensor;


public:
ColorWheel();
void SpinRight();
void SpinLeft();
void SensorDetection();


};