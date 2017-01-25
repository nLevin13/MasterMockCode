#include "TurnMotorOff.h"

TurnMotorOff::TurnMotorOff()
{
	Requires(drive);
}

// Called just before this Command runs the first time
void TurnMotorOff::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void TurnMotorOff::Execute()
{
	drive->setSpeedRight(0);
}

// Make this return true when this Command no longer needs to run execute()
bool TurnMotorOff::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void TurnMotorOff::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnMotorOff::Interrupted()
{

}
