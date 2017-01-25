#include "ForwardDrive.h"
#include "Subsystems/DriveTrain.h"
ForwardDrive::ForwardDrive()
{
	Requires(drive);

}

// Called just before this Command runs the first time
void ForwardDrive::Initialize()
{
	SetTimeout(3);
}

// Called repeatedly when this Command is scheduled to run
void ForwardDrive::Execute()
{
	drive->arcadeDrive(0.35,-0.1);
}

// Make this return true when this Command no longer needs to run execute()
bool ForwardDrive::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void ForwardDrive::End()
{
	drive->arcadeDrive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ForwardDrive::Interrupted()
{

}
