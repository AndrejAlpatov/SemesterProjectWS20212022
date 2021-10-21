#pragma once
#include <iostream>
#include <string>
#include "cGeoPos.h"
using namespace std;

/// <summary>
/// class cStreckenEndPunkt manages geographic positions of railway stations
/// </summary>
class cStreckenEndPunkt
{
	string bezeichnung;
	cGeoPos coordinates;

public:
	cStreckenEndPunkt(string bezeichnung = "Haltepunkt", double laenge = 0.0, double breite = 0.0);
	void ausgabe();
	void eingabe();
};

