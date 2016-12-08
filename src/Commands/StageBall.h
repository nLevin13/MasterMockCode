#ifndef StageBall_H
#define StageBall_H

#include "../CommandBase.h"
#include "WPILib.h"

class StageBall: public CommandBase
{
public:
	StageBall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
