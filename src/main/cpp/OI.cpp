/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include <WPILib.h>
#include "ctre/Phoenix.h"

OI::OI() : gameController(new Joystick(0))
{
  // Process operator interface input here.
}

Joystick* OI::getGameController(){
  return gameController;
}