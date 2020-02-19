#pragma once

#include <Robot.h>
#include "rev/CANSparkMax.h"

using namespace frc;

class Climber{


private:
    rev::CANSparkMax * lift;

public:

Climber();
void Up(double powerup);
void Down(double powerdown);
void ZeroSpeed();


};