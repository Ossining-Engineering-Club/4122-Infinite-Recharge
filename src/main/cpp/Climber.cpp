#include <Climber.h>
#include <iostream>

Climber::Climber(): 
climb(18, rev::CANSparkMax::MotorType::kBrushless),
climbencoder(climb, rev::CANEncoder::EncoderType::kHallSensor, 1)
{
    climb.GetEncoder();

}


void Climber::Up(double powerup){
climb.Set(powerup);

}

void Climber::Down(double powerdown){
    climb.Set(-powerdown);
}

void Climber::ZeroSpeed(){
    climb.Set(0.0);
}

double Climber::EncoderValue(){

return climbencoder.GetPosition();

}

void Climber::SetClimberPosition(double power, double EncoderPosition){
  
  /*
 double correction = (EncoderPosition-climb.GetEncoder());
    if(abs(correction) > power)
        correction = power * (abs(correction)/correction);
    Set(correction, false);
    if(GetEncoderPosition() > EncoderPosition){
        SetPower(-1.0 * power, false);
    }
    else if(GetEncoderPosition() < EncoderPosition){
        SetPower(power, false);
    }
    else{
        SetPower(0.0, false);
    }
    
    */
}