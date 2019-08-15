/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "frc/Joystick.h"
#include "ctre/Phoenix.h"
#include "frc/WPILib.h"

using namespace frc;

class OI {
 private:
  Joystick* gameController;
  JoystickButton* armMoveUp;
  JoystickButton* armMoveDown;
  JoystickButton* outtakeButton;
  JoystickButton* intakeButton;
 public:
  Joystick* getGameController();
  JoystickButton* getIntake();
  OI();
};
