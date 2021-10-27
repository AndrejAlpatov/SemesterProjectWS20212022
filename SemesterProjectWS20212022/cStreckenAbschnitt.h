#pragma once
#include"cStreckenEndPunkt.h"

/// <summary>
/// Class cStreckenAbschnitt is for managing route sections
/// </summary>
class cStreckenAbschnitt
{
	int nummer_des_streckenabschnitts;
	bool elektrifiziert;
	bool belegt;
	cStreckenEndPunkt end_punkt[2];


public:
	cStreckenAbschnitt(cStreckenEndPunkt end_punkt_1 = cStreckenEndPunkt(), cStreckenEndPunkt end_punkt_2= cStreckenEndPunkt(), int nummer_des_streckenabschnitts = 0,
						bool elektrifiziert = true, bool belegt = false);

	cStreckenAbschnitt(double endpunkt_1_longitude, double endpunkt_1_latitude, string endpunkt_1_bezeichnung, double endpunkt_2_longitude
		, double endpunkt_2_latitude, string endpunkt_2_bezeichnung, int nummer_des_streckenabschnitts = 0, bool elektrifiziert = true
		, bool belegt = false);

	void ausgabe();
	void eingabe();
};

