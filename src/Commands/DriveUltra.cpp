#include "DriveUltra.h"
#include "Subsystems/DriveTrain.h"
DriveUltra::DriveUltra()
{
	Requires(drive);
	pid = NULL;
}

// Called just before this Command runs the first time
void DriveUltra::Initialize()
{
	SetTimeout(10);
}

// Called repeatedly when this Command is scheduled to run
void DriveUltra::Execute()
{
	drive->arcadeDrive(0.35,-0.3);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveUltra::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void DriveUltra::End()
{
	drive->arcadeDrive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveUltra::Interrupted()
{

}
