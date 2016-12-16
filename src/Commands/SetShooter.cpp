#include "SetShooter.h"
#include <cmath>

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
		distance = NetworkTablesInterface::getDistance();
		//azimuth = NetworkTablesInterface::GetAzimuth();
		altitude = NetworkTablesInterface::getAltitude();
	}
	else{
		distance = 0;
		altitude = 0;
	}
	shooter->resetEncoder();
	//speed = shooter->getRate();
	speedPid = new WVPIDController(0.5,0,0,findSpeed(distance), false);
	//shooter->resetAngle();
}

// Called repeatedly when this Command is scheduled to run
void SetShooter::Execute()
{
	double current_rate = shooter->getRate();
	double pwm_val = speedPid->Tick(current_rate);

	shooter->setSpeed(pwm_val);
}

// Make this return true when this Command no longer needs to run execute()
bool SetShooter::IsFinished()
{
	return fabs(speedPid->GetError() < 0.01);
}

// Called once after isFinished returns true
void SetShooter::End()
{
	shooter->loadBall();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooter::Interrupted()
{

}

double SetShooter::findSpeed(double dist){


	double yComponent = sqrt(2 * 9.81 * TARGET_HEIGHT);
	return yComponent / sin(SHOOTER_ANGLE);
	//double xComponent = speed * cos(SHOOTER_ANGLE);

}
