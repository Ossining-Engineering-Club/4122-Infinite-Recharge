/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/


#pragma once

#include <ctre/Phoenix.h>

#include <frc/TimedRobot.h>
<<<<<<< HEAD

#include <OECJoystick.h>

#include <frc/WPILib.h>
=======
#include "OECJoystick.h"
#include "Tankdrive.h"
>>>>>>> 3e80457c812fa17fced85671261704b670104bbe

#include <IntakeSystem.h>

using namespace frc;

class Robot : public frc::TimedRobot {
 public:

  Robot();
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

<<<<<<< HEAD
SmartDashboard * dash;
=======
Tankdrive tankdrive;
>>>>>>> 3e80457c812fa17fced85671261704b670104bbe


};
