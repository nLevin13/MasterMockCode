#ifndef PID_H
#define PID_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "WVPIDController.h"
#include "DriveTrain.h"
#include "DriveTrain.cpp"
#include "GyroL3GD20H.cpp"
#include "GyroL3GD20H.h"


class PID: public CommandBase
{

private:
	WVPIDController* anglePID;
	WVPIDController* distancePID;
	double distanceGoal;
	double angleGoal;
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
