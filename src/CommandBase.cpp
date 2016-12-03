#include "CommandBase.h"
//#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
//std::unique_ptr<ExampleSubsystem> CommandBase::examplesubsystem;
Shooter* CommandBase::shooter = NULL;
OI* CommandBase::oi = NULL;
MGyro* CommandBase::gyro = NULL;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	//examplesubsystem.reset(new ExampleSubsystem());
	shooter = new Shooter();
	oi = new OI(); //OI has to be created after all other subsystems
	gyro = new MGyro();
}
