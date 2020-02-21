#include "Shooter.h"

Shooter::Shooter():
    TopFlywheel(9, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
    BottomFlywheel(10, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
    Feeder(16),
    Hood(12),
    Turret(11),
    TurretEncoder(0, 1, false, frc::CounterBase::k4X),
    HoodEncoder(0, 1, false, frc::CounterBase::k4X),
    TurretController(),
    HoodController()
{
    TopFlywheel.GetEncoder();
    BottomFlywheel.GetEncoder();
    trimTurret = 0.0;
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
