#ifndef TestNoSensors_H
#define TestNoSensors_H

#include "../CommandBase.h"
#include "WPILib.h"

class TestNoSensors: public CommandBase
{
public:
	TestNoSensors();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	Talon* left;
	Talon* right;
};

#endif
