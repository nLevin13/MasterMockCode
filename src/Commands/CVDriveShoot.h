#ifndef CVDriveShoot_H
#define CVDriveShoot_H

#include "../CommandBase.h"
#include "WPILib.h"

class CVDriveShoot: public CommandBase
{
public:
	CVDriveShoot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
