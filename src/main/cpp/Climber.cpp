#include <Climber.h>

Climber::Climber(){
    lift = new rev::CANSparkMax(18, rev::CANSparkMax::MotorType::kBrushless);
}

void Climber::Up(double powerup){
    lift -> Set(powerup);
}

void Climber::Down(double powerdown){
    lift -> Set(powerdown);
}

void Climber::ZeroSpeed(){
    lift -> Set(0.0);
}