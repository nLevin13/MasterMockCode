#ifndef SetShooterNoCV_H
#define SetShooterNoCV_H

#include "../CommandBase.h"
#include "WPILib.h"

class SetShooterNoCV: public CommandBase
{
public:
	SetShooterNoCV();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
