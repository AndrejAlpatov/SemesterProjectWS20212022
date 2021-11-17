#pragma once
#include "cDieselLok.h"
#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// Base class for train
/// 
/// Contents only a locomotive. Wagons handled in derived classes
/// </summary>
class cZug
{
	cDieselLok lokomotive;
	string zug_nummer;

	string correction_of_train_number(string strint_to_correction);

public:
	cZug(double spritMenge = 0, double triebkraft = 6500.0, double gewicht = 50000, string zug_numer = "1");
	string getZugNummer();
	void setZugNummer(string trainNumber);
};

