#ifndef CVDrivePark_H
#define CVDrivePark_H

#include "../CommandBase.h"
#include "WPILib.h"

class CVDrivePark: public CommandBase
{
public:
	CVDrivePark();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
