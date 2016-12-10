/*
 * NetworkTablesInterface.h
 *
 *  Created on: Oct 29, 2016
 *      Author: Nir
 */

#ifndef SRC_UTILITIES_NETWORKTABLESINTERFACE_H_
#define SRC_UTILITIES_NETWORKTABLESINTERFACE_H_

#include "NetworkTables/NetworkTable.h"

class NetworkTablesInterface {
public:
	static bool targetFound();
	static double getDistance();
	static double getAzimuth();
	static double getAltitude();

};

#endif /* SRC_UTILITIES_NETWORKTABLESINTERFACE_H_ */
