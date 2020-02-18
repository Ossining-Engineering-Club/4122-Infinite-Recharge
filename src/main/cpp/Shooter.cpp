#include "Shooter.h"

Shooter::Shooter():
    TopFlywheel(9, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
    BottomFlywheel(10, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
    Turret(11, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
    TurretEncoder(Turret, rev::CANEncoder::EncoderType::kHallSensor, 1),
    Hood(12),
    TurretController(),
    HoodController()
{
    TopFlywheel.GetEncoder();
    BottomFlywheel.GetEncoder();
    Turret.GetEncoder();
}

void Shooter::TurnTurret(double power){
    if(power > 1.0)
        power = 1.0;
    else if(power < 1.0)
        power = -1.0;
    
    Turret.Set(power);
}

void Shooter::TrimTurret(double angleDegrees){

}

void TurnToPosition(double angleDegrees){

}
