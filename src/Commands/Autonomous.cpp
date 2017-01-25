#include "Autonomous.h"
#include "Commands/DriveUltra.h"
#include "Commands/Turn.h"
#include "Commands/ForwardDrive.h"
#include "Commands/TurnAndDrive.h"
Autonomous::Autonomous()
{
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.

	AddSequential(new TurnAndDrive(0,-0.1));

	//AddSequential(new DriveUltra());
	//AddSequential(new Turn(-0.45));
	//AddSequential(new ForwardDrive());
}
