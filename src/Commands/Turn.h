#ifndef Turn_H
#define Turn_H

#include "../CommandBase.h"
#include "WPILib.h"

class Turn: public CommandBase
{
public:
	Turn(float ang);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	float angle;
};

#endif
