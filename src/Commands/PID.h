#ifndef PID_H
#define PID_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "WVPIDController.h"
#include "DriveTrain.h"
#include "DriveTrain.cpp"


class PID: public CommandBase
{

private:
	WVPIDController* anglePID;
	WVPIDController* distancePID;
	double distanceGoal;
	double angleGoal;
	Gyro* gyro;
	// TODO: rename encoders later for the shooter to limit confusion
	DriveTrain* motorRun;


public:
	PID();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
