/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Catcher.h"
#include "RobotMap.h"

Catcher::Catcher() : Subsystem("ExampleSubsystem"),
leftWheels(new TalonSRX(LEFT_WHEELS_MOTOR)),
rightWheels(new TalonSRX(RIGHT_WHEELS_MOTOR))
{}

void Catcher::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Catcher::intake(double power){
  leftWheels->Set(ControlMode::PercentOutput, power);
  rightWheels->Set(ControlMode::PercentOutput, power);
}