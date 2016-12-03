#ifndef SetShooter_H
#define SetShooter_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "NetworkTablesInterface.h"
class SetShooter: public CommandBase
{
public:
	SetShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	void findSpeed();
private:
	double distance;
	//double azimuth;
	double speed;
	double altitude;
	WVPIDController* speedPid;
};

#endif
