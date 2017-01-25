#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include "Commands/Command.h"
//#include "Subsystems/ExampleSubsystem.h"
#include "OI.h"
#include "WPILib.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Piston.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command
{
public:
	CommandBase(const std::string &name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	//static std::unique_ptr<ExampleSubsystem> examplesubsystem;
	static Shooter* shooter;
	static DriveTrain* drive;
	static Piston* piston;
	//static MGyro* gyro;
	static OI* oi;
	//static MGyro* gyro;
};

#endif
