#ifndef PID_H
#define PID_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "WVPIDController.h"


class PID: public CommandBase
{

private:
	WVPIDController* anglePID;
	WVPIDController* distancePID;
	double distanceGoal;
	double angleGoal;
	Gyro* gyro;
	Encoder* encoder;
	TalonSRX* leftMotor;
	TalonSRX* rightMotor;

public:
	PID();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
