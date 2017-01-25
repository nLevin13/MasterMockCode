#ifndef TurnMotorOn_H
#define TurnMotorOn_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "Subsystems/DriveTrain.h"
class TurnMotorOn: public CommandBase
{
public:
	TurnMotorOn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	//Talon* right;
};

#endif
