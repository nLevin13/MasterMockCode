#include <Commands/PIDGoToTarget.h>
#include "DriveTrain.h"
#include "DriveTrain.cpp"
#define abs(x)  (x<0)?-x:x

PIDGoToTarget::PIDGoToTarget()
{
	Requires(DriveTrain);
	anglePID = new WVPIDController(1, 1, 1, angleGoal, false);
	distancePID =  new WVPIDController(1, 1, 1, distanceGoal, false);

}

// Called just before this Command runs the first time
void PIDGoToTarget::Initialize()
{
	motorRun->resetGyro();
	motorRun->resetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void PIDGoToTarget::Execute()
{
	float measuredVal = motorRun->getGyroAngle();

	bool cvUpdated = false; // TODO: Get CV Data from Network Tables
	if(cvUpdated){
		anglePID = new WVPIDController(1, 1, 1, angleGoal, false);
		distancePID = new WVPIDController(1, 1, 1, distanceGoal, false);
	}

	double leftDistance = motorRun->getLeftEncoderDistance();
	double rightDistance = motorRun->getRightEncoderDistance();
	float angleMod = anglePID->Tick(measuredVal);
	float distanceMod = distancePID->Tick((abs(leftDistance)+abs(rightDistance))/2.0);

	motorRun->arcadeDrive(distanceMod, angleMod);

}

// Make this return true when this Command no longer needs to run execute()
bool PIDGoToTarget::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PIDGoToTarget::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PIDGoToTarget::Interrupted()
{

}
