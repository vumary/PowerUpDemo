/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Arm.h"

Arm::Arm() : Subsystem("Arm"), arm(new TalonSRX(5)) {}

void Arm::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}
void Arm::moveArm(double power) {
  arm->Set(ControlMode::PercentOutput, power);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
