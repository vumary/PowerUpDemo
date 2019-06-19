/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Drivetrain.h"
#include "RobotMap.h"
#include "commands/TankDrive.h"

Drivetrain::Drivetrain() : Subsystem("ExampleSubsystem"),
left(new TalonSRX(LEFT_MOTOR)),
right(new TalonSRX(RIGHT_MOTOR)) {}
void Drivetrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new TankDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Drivetrain::tankDrive(double leftPower, double rightPower){
  left->Set(ControlMode::PercentOutput, leftPower);
  right->Set(ControlMode::PercentOutput, rightPower);
}

