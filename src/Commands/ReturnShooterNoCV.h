#ifndef ReturnShooterNoCV_H
#define ReturnShooterNoCV_H

#include "../CommandBase.h"
#include "WPILib.h"

class ReturnShooterNoCV: public CommandBase
{
public:
	ReturnShooterNoCV();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
