#ifndef ForwardDrive_H
#define ForwardDrive_H

#include "../CommandBase.h"
#include "WPILib.h"

class ForwardDrive: public CommandBase
{
public:
	ForwardDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
