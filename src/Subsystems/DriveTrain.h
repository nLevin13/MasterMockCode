#ifndef DriveTrain_H
#define DriveTrain_H

#include <WPILib.h>
#include "Commands/Subsystem.h"
#include "../Sensors/UltrasonicSensors.h"

class DriveTrain: public Subsystem
{
    private:



        Talon* left;
        Talon* right;
        Encoder* encoderLeft;
        Encoder* encoderRight;
        float mult;
        int ticksToDistance;
        BuiltInAccelerometer* accel;
        AnalogGyro* gyro;
        //DigitalGyro* gyro;
        //UltrasonicSensors* ultrasonicSensors;

    public:
        DriveTrain();
        ~DriveTrain();

        static float Limit(float num, float max);

        void setMult(float m);
        int getMult();
        void arcadeDrive(float move, float rotate);

        double getDistance();
        double getRate();
        void resetEncoders();
        void getAccelerations(double* x, double* y, double* z);

        double getRightEncoderDistance();
        double getLeftEncoderDistance();

        double getGyroAngle();
        void resetGyro();

        double readUltra(uint16_t sensorIndex);

        //void setSpeedLeft

        void InitDefaultCommand();
};

#endif

