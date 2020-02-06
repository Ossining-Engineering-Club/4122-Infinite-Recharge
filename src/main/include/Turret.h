#pragma once
#include <ctre/Phoenix.h>

class Turret{
    public:
        Turret();
        double GetPosition();
    private:
        ctre::phoenix::motorcontrol::can::WPI_TalonSRX turretMotor;
        ctre::phoenix::motorcontrol::SensorCollection turretEncoder;
};