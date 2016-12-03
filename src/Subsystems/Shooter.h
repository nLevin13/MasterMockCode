#ifndef Shooter_H
#define Shooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX* shooterLeft;
	TalonSRX* shooterRight;
	TalonSRX* adjustAngle; //not sure if its a TalonSRX motor
	Encoder* encoderLeft;
	Encoder* encoderRight;
	Encoder* angleencoder;
	Compressor* pneumatic; //not sure if we're using pneumatics
public:
	Shooter();
	~Shooter();
	void InitDefaultCommand();
	void setSpeed(double speed);
	double getRate();
	void loadBall();
	void resetEncoder();


};

#endif
