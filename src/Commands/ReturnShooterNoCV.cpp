#include "ReturnShooterNoCV.h"

ReturnShooterNoCV::ReturnShooterNoCV()
{
	Requires(shooter);
	Requires(piston);
}

// Called just before this Command runs the first time
void ReturnShooterNoCV::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ReturnShooterNoCV::Execute()
{
	shooter->setSpeed(0);
}

// Make this return true when this Command no longer needs to run execute()
bool ReturnShooterNoCV::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ReturnShooterNoCV::End()
{
	piston->retract();

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReturnShooterNoCV::Interrupted()
{

}
