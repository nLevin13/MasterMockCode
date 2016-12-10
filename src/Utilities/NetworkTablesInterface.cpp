/*
 * NetworkTablesInterface.cpp
 *
 *  Created on: Oct 29, 2016
 *      Author: Nir
 */

#include <Utilities/NetworkTablesInterface.h>

bool NetworkTablesInterface::targetFound() {
	return NetworkTable::GetTable("cv")->GetBoolean("cv_target", false);
}

double NetworkTablesInterface::getDistance() {
	return NetworkTable::GetTable("cv")->GetNumber("cv_dist", -1.0);
}

double NetworkTablesInterface::getAzimuth() {
	return NetworkTable::GetTable("cv")->GetNumber("cv_azim", -1.0);
}

double NetworkTablesInterface::getAltitude() {
	return NetworkTable::GetTable("cv")->GetNumber("cv_alti", -1.0);
}
