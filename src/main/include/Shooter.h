#pragma once
#include <ctre/Phoenix.h>
#include <rev/CANSparkMax.h>
#include <frc/Solenoid.h>
#include <frc/Encoder.h>
#include "LidarLite.h"
#include "Limelight.h"
#include "OECPIDController.h"

class Shooter{
    private:
        rev::CANSparkMax TopFlywheel;
        rev::CANSparkMax BottomFlywheel;
        
        ctre::phoenix::motorcontrol::can::WPI_TalonSRX Feeder;
        ctre::phoenix::motorcontrol::can::WPI_TalonSRX Hood;
        ctre::phoenix::motorcontrol::can::WPI_TalonSRX Turret;
        
        frc::Encoder TurretEncoder;
        frc::Encoder HoodEncoder;

        OECPIDController HoodController;
        OECPIDController TurretController;

        double trimTurret;
    public:
        Shooter();
        void TurnTurret(double power);
        void TrimTurret(double angleDegrees);
        void TurnToPosition(double angleDegrees);
        
        void MoveHood(double power);
        void TrimHood(double angleDegrees);
        void MoveHoodToPosition(double angleDegrees);

        void SpinFlywheelsOpenLoop(double topPower, double bottomPower);
        void SpinFlywheelsPID(double topRPM, double bottomRPM);
        void Fire();

        void AutoTarget();
};