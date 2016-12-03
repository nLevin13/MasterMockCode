#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter() :
		Subsystem("Shooter")
{
	shooterLeft = new TalonSRX(LEFTSHOOTER);//LEFTSHOOTER, RIGHTSHOOTER, etc are the pin numbers
	shooterRight = new TalonSRX(RIGHTSHOOTER);
	encoderLeft = new Encoder(SHOOTERENCODERLEFT);
	encoderRight = new Encoder(SHOOTERENCODERRIGHT);
	pneumatic = new Compressor();
	//adjustAngle = new TalonSRX(ADJUSTANGLE);
	//angleencoder = new Encoder(ANGLEENCODER);
}
void Shooter::setSpeed(double speed){
	shooterLeft->SetSpeed(speed);
	shooterRight ->SetSpeed(-speed);//wheel shooters turn in opposite directions, so set right to  negative speed
}

double Shooter::getRate(){
	return (encoderLeft->GetRate() + encoderRight->GetRate())/2.;
}
void Shooter::loadBall(){
	//this is pneumatics section, so we don't need to code this right now
}
void Shooter::resetEncoder(){
	encoderLeft->Reset();
	encoderRight->Reset();
}



Shooter::~Shooter(){//destructor
	delete shooterLeft;
	delete shooterRight;
	delete encoderLeft;
	delete encoderRight;
	delete pneumatic;
	shooterLeft = NULL;
	shooterRight=NULL;
	encoderLeft = NULL;
	encoderRight = NULL;
	pneumatic = NULL;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
