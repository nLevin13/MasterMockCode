#ifndef DriveUltra_H
#define DriveUltra_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "../Utilities/WVPIDController.h"

class DriveUltra: public CommandBase
{
public:
	DriveUltra();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	WVPIDController* pid;
};

#endif
