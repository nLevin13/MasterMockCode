#include "OI.h"
#include "Commands/TurnMotorOn.h"
#include "Commands/TurnMotorOff.h"
#include "Commands/Pneumatics/PistonExtend.h"
#include "Commands/Pneumatics/PistonSolenoidOff.h"
#include "Commands/Pneumatics/PistonRetract.h"
#include "Commands/SetShooterNoCV.h"
#include "Commands/ReturnShooterNoCV.h"

OI::OI():
	driveStick(new Joystick(0)), operatorStick(new Joystick(1))
{
	Button* toggleReverse = new JoystickButton(driveStick, 13);
	    toggleReverse->WhenPressed(new TurnMotorOn());
	    toggleReverse->WhenReleased(new TurnMotorOff());

	JoystickButton* pistonExtend = new JoystickButton(driveStick, 1);
	    //JoystickButton* pistonRetract = new JoystickButton(driveStick, 2);

	    pistonExtend->WhenPressed(new SetShooterNoCV());
	    pistonExtend->WhenReleased(new ReturnShooterNoCV());

	    //pistonRetract->WhenPressed(new PistonRetract());
	    //pistonRetract->WhenReleased(new PistonSolenoidOff());
}

Joystick* OI::getDriveStick()
{
    return driveStick;
}

Joystick* OI::getOperatorStick()
{
    return operatorStick;
}

OI::~OI()
{
    delete driveStick;
    delete operatorStick;
}
