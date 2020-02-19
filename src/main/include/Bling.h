#pragma once
#include <Robot.h>
#include <frc/Spark.h>

using namespace frc;

class Bling{


Spark * blinkin;


public:
Bling();
void BlingRed();
void BlingBlue();
void BlingGreen();

};