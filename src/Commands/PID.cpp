#include "PID.h"
#include "DriveTrain.h"
#include "DriveTrain.cpp"


PID::PID()
{
	Requires(MGyro);
	Requires(DriveTrain);
	anglePID = new WVPIDController(1, 1, 1, angleGoal, false);


}

// Called just before this Command runs the first time
void PID::Initialize()
{
	gyro->Reset();
	encoder1->Reset();
	encoder2->Reset();
	motorRun->resetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void PID::Execute()
{
	float measuredVal = gyro->GetAngle();

	bool cvUpdated = false; // TODO: Get CV Data from Network Tables
	if(cvUpdated){
		anglePID = new WVPIDController(1, 1, 1, angleGoal, false);
		distancePID = new WVPIDController(1, 1, 1, distanceGoal, false);
	}
	float angleMod = anglePID->Tick(measuredVal);
	float distanceMod = motorRun->getDistance();

	motorRun->arcadeDrive(distanceMod, angleMod);








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
