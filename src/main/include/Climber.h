#pragma once

#include "rev/CANSparkMax.h"
#include <frc/Encoder.h>
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
void ZeroClimberSpeed();
double EncoderValue();
void SetClimberPosition(double power, double EncoderPosition);

};