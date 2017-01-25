#ifndef TurnMotorOff_H
#define TurnMotorOff_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "Subsystems/DriveTrain.h"

class TurnMotorOff: public CommandBase
{
public:
	TurnMotorOff();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
