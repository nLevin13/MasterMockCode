#include "SetShooterNoCV.h"

SetShooterNoCV::SetShooterNoCV()
{
	Requires(shooter);
	Requires(piston);
}

// Called just before this Command runs the first time
void SetShooterNoCV::Initialize()
{
	//SetTimeout(0.5);
}

// Called repeatedly when this Command is scheduled to run
void SetShooterNoCV::Execute()
{
	shooter->setSpeed(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool SetShooterNoCV::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SetShooterNoCV::End()
{
	piston->extend();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooterNoCV::Interrupted()
{

}
