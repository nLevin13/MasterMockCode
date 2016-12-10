/*
 * GyroAxis.h
 *
 *  Created on: Dec 6, 2016
 *      Author: nidhi
 */

#ifndef GYROAXIS_H_
#define GYROAXIS_H_

namespace wvrobotics {

class GyroAxis {

private:
	double xAxis;
	double yAxis;
	double zAxis;
public:
	GyroAxis();
	double getxAxis()
	{
		return xAxis;
	}
	double getyAxis()
	{
		return yAxis;
	}
	double getzAxis()
	{
		return zAxis;
	}
	void setxAxis(double x)
	{
		xAxis = x;
	}
	void setyAxis(double y)
	{
		yAxis = y;
	}
	void setzAxis(double z)
	{
		zAxis = z;
	}
	void setAxis(double x, double y, double z)
	{
		xAxis = x;
		yAxis = y;
		zAxis = z;
	}
	void addAxis(double x, double y, double z)
	{
		xAxis += x;
		yAxis += y;
		zAxis += z;
	}
	~GyroAxis();
};

} /* namespace wvrobotics */

#endif /* GYROAXIS_H_ */
