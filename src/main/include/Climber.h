#pragma once

#include "rev/CANSparkMax.h"

using namespace frc;

class Climber{


private:
    rev::CANSparkMax climb;
    rev::CANEncoder climbencoder;

    double encodervalue;

public:

Climber();
void Up(double powerup);
void Down(double powerdown);
void ZeroSpeed();
double EncoderValue();
void SetClimberPosition(double power, double EncoderPosition);

};