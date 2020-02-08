/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/TimedRobot.h>
#include <OECJoystick.h>
#include <frc/WPILib.h>

#include <Bling.h>
#include <Climber.h>
#include <ColorWheel.h>
#include <Constants.h>
#include <Intake.h>
#include <LidarLite.h>
#include <Limelight.h>
#include <OECJoystick.h>
#include <OECPigeonIMU.h>
#include <PathReader.h>
#include <Shooter.h>
#include <Tankdrive.h>
#include <Turret.h>
#include <Ultrasonic.h>

using namespace frc;

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;

OECJoystick * stick1;
OECJoystick * stick2;
OECJoystick * stick3;
OECJoystick * driverstation;


};
