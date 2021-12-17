#pragma once
#include "cStreckenEndPunkt.h"
#include "cZug.h"
#include <string>
#include "global.h"

/// <summary>
/// Class for management of a trip 
/// </summary>
class cZugfahrt
{
	cStreckenEndPunkt	startBahnhof,
						zielBahnhof;
	cZug *zug;

public:
	cZugfahrt(cZug* array_of_trains[], cStreckenEndPunkt array_of_stations[]);
	//TODO: create an array of endPunkte for Start- and Zielbahnhof in main
	//TODO: pass train array in constructor of class cZugfahrt
	//TODO: Propose user to choose the train number for a trip, search in array and allocation to zugfahrt in main
	//TODO: Propose user to choose the Start and finish points for a trip, search in array and allocation to zugfahrt in main
	//TODO: overload copy constructor and = operators
};

