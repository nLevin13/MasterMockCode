#ifndef SetShooter_H
#define SetShooter_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "../Utilities/NetworkTablesInterface.h"
#include "Utilities/WVPIDController.h"
class SetShooter: public CommandBase
{
public:
	SetShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	double findSpeed(double dist);
private:
	double distance;
	//double azimuth;
	double speed;
	double altitude;
	//WVPIDController* speedPid;
};

#endif
