#include "Turn.h"
#include "Subsystems/DriveTrain.h"

Turn::Turn(float ang)
{
	Requires(drive);
	angle = ang;
}

// Called just before this Command runs the first time
void Turn::Initialize()
{
	SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void Turn::Execute()
{
	drive->arcadeDrive(0,angle);
}

// Make this return true when this Command no longer needs to run execute()
bool Turn::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void Turn::End()
{
	drive->arcadeDrive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Turn::Interrupted()
{

}
