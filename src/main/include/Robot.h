#pragma once

#include <ctre/Phoenix.h>

#include <frc/TimedRobot.h>
#include "OECJoystick.h"

#include <frc/smartdashboard/SmartDashboard.h>


//Class References Files
#include "Tankdrive.h"
#include "IntakeSystem.h"
#include "Climber.h"
#include "ColorWheel.h"
#include "Bling.h"
#include <frc/Encoder.h>

using namespace frc;

class Robot : public frc::TimedRobot {


private:
OECJoystick stick1;
OECJoystick stick2;
OECJoystick stick3;
OECJoystick driverstation;

frc::SmartDashboard * dash;

Tankdrive tankdrive;
IntakeSystem intake;
Climber climber;
ColorWheel colorwheel;
Bling bling;

frc::Encoder shooterEncoder;

//variable for intake speed
double intakespeed;

//variable for climber speed
double climberspeed;


public:
  Robot();
  void RobotInit() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;


};
