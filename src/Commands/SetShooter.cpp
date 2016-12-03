#include "SetShooter.h"

SetShooter::SetShooter()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(shooter);
	distance = 0;
	//azimuth = 0;
	speed = 0;
	altitude = 0;
	speedPid = NULL;
}

// Called just before this Command runs the first time
void SetShooter::Initialize()
{
	if(NetworkTablesInterface::targetFound()){
		distance = NetworkTablesInterface::GetDistance();
		//azimuth = NetworkTablesInterface::GetAzimuth();
		altitude = NetworkTablesInterface::GetAltitude();
	}
	else{
		distance = 0;
		//azimuth = 0;
	}
	shooter->resetEncoder();
	speed = shooter->getRate();
	speedPid = new WVPIDController(0.5,0,0,speed, false);
	//shooter->resetAngle();
}

// Called repeatedly when this Command is scheduled to run
void SetShooter::Execute()
{
	double current_rate = shooter->getRate();
}

// Make this return true when this Command no longer needs to run execute()
bool SetShooter::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void SetShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooter::Interrupted()
{

}
void SetShooter::findSpeed(){

}
