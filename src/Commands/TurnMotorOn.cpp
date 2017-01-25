#include "TurnMotorOn.h"

TurnMotorOn::TurnMotorOn()//:
	//right(new Talon(0))
{
	Requires(drive);
}

// Called just before this Command runs the first time
void TurnMotorOn::Initialize()
{
	//SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void TurnMotorOn::Execute()
{
	drive->setSpeedRight(0.1);
}

// Make this return true when this Command no longer needs to run execute()
bool TurnMotorOn::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void TurnMotorOn::End()
{
	//right->SetSpeed(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnMotorOn::Interrupted()
{

}
