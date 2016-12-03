#include "PID.h"

PID::PID()
{
	Requires(MGyro);
	anglePID = new WVPIDController(1, 1, 1, angleGoal, false);
	distancePID = new WVPIDController(1, 1, 1, distanceGoal, false);

}

// Called just before this Command runs the first time
void PID::Initialize()
{
	gyro->Reset();
	encoder->Reset();
}

// Called repeatedly when this Command is scheduled to run
void PID::Execute()
{
	float measuredVal = gyro->GetAngle();
	double distanceVal = encoder->GetDistance();
	bool cvUpdated = false; // TODO: Get CV Data from Network Tables
	if(cvUpdated){
		anglePID = new WVPIDController(1, 1, 1, angleGoal, false);
		distancePID = new WVPIDController(1, 1, 1, distanceGoal, false);
	}
	double angleMod = anglePID->Tick(measuredVal);
	double distanceMod = distancePID->Tick(distanceVal);


}

// Make this return true when this Command no longer needs to run execute()
bool PID::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PID::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PID::Interrupted()
{

}
