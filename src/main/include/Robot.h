#pragma once

#include <ctre/Phoenix.h>

#include <frc/TimedRobot.h>
#include "OECJoystick.h"
#include "Tankdrive.h"
#include <frc/smartdashboard/SmartDashboard.h>

#include "IntakeSystem.h"
#include "Climber.h"
#include "ColorWheel.h"

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
