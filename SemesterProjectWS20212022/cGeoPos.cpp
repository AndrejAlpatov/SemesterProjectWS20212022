#include "cGeoPos.h"
#include <cmath>
#include <iostream>
using namespace std;

/// <summary>
/// Correction of the geographic coordinates
/// 
/// Should be:
/// -180<=longitude<=180
/// -90<=latitude<=90
/// </summary>
void cGeoPos::corrGeoCoordinates()
{
	double temp;

	//Correction of longitude
	temp = fmod(longitude, 360.0);
	if (temp > 180) temp -= 360.0;
	if (temp < -180) temp += 360.0;
	longitude = temp;

	//correction of latitude
	temp = fmod(latitude, 180.0);
	if (temp > 90) temp -= 180.0;
	if (temp < -90) temp += 180.0;
	latitude = temp;
}

/// <summary>
/// universal constructor
/// </summary>
/// <param name="longitude"></param>
/// <param name="latitude"></param>
cGeoPos::cGeoPos(double longitude, double latitude)
{
	this->longitude = longitude;
	this->latitude = latitude;

	corrGeoCoordinates();
}


/// <summary>
/// Set attributes longitude and latitude
/// 
/// + correction of the values
/// </summary>
/// <param name="longitude"></param>
/// <param name="latitude"></param>
void cGeoPos::setGeoPos(double longitude, double latitude)
{
	this->longitude = longitude;
	this->latitude = latitude;

	corrGeoCoordinates();
}

void cGeoPos::printGeoPos()
{
	cout << "Geografische Koordinatenwerte: \n"
		<< "Longitude: " << longitude
		<< "\nLatitude: " << latitude << endl;
}
