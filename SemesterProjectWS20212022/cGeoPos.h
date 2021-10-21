#pragma once
class cGeoPos
{
	double longitude;
	double latitude;

	void corrGeoCoordinates();

public:

	cGeoPos(double longitude = 0.0, double latitude = 0.0);
	void setGeoPos(double longitude, double latitude);
	void printGeoPos();
	double getLongitude() { return longitude; };
	double getLatitude() { return latitude; }
};

