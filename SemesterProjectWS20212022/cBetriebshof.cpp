#include "cBetriebshof.h"

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="bezeichnung"></param>
/// <param name="number_of_tracks"></param>
cBetriebshof::cBetriebshof(string bezeichnung, int number_of_tracks): cStreckenEndPunkt(bezeichnung)
{
	this->number_of_tracks = number_of_tracks;
}
