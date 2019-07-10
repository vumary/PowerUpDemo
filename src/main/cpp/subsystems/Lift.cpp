/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Lift.h"
#include "RobotMap.h"
#include "commands/Lifting.h"

Lift::Lift() : Subsystem("ExampleSubsystem"), liftMotor(new TalonSRX(LIFT_MOTOR)) {}

void Lift::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new Lifting());
}

void Lift::lifting(double p){
  liftMotor->Set(ControlMode::PercentOutput, p);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
