#include "Shooter.h"

Shooter::Shooter():
    TopFlywheel(9, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
    BottomFlywheel(10, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
    TopController(TopFlywheel),
    BottomController(BottomFlywheel),
    Feeder(13),
    Hood(12),
    Turret(11),
    TurretEncoder(0, 1, false, frc::CounterBase::k4X),
    HoodEncoder(0, 1, false, frc::CounterBase::k4X),
    TurretController(),
    HoodController()
{
    TopFlywheel.GetEncoder();
    BottomFlywheel.GetEncoder();
    TopController.SetP(SHOOTER_P);
    TopController.SetI(SHOOTER_I);
    TopController.SetD(SHOOTER_D);
    TopController.SetFF(SHOOTER_FF);
    BottomController.SetP(SHOOTER_P);
    BottomController.SetI(SHOOTER_I);
    BottomController.SetD(SHOOTER_D);
    BottomController.SetFF(SHOOTER_FF);
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
void Shooter::SpinFlywheelsOpenLoop(double topPower, double bottomPower){
    TopFlywheel.Set(topPower);
    BottomFlywheel.Set(bottomPower);

}

void Shooter::SpinFlywheelsPID(double topRPM, double bottomRPM){
    TopController.SetReference(topRPM, rev::ControlType::kVelocity, 0, SHOOTER_FF, rev::CANPIDController::ArbFFUnits::kVoltage);
    BottomController.SetReference(bottomRPM, rev::ControlType::kVelocity, 0, SHOOTER_FF, rev::CANPIDController::ArbFFUnits::kVoltage);
}

void Shooter::FeederWheel(double feederspeed){
    Feeder.Set(feederspeed);
}