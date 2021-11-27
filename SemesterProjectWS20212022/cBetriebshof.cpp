#include "cBetriebshof.h"

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="bezeichnung">The name of the station</param>
/// <param name="number_of_tracks">The number of tracks, that can be simultaneously on the station</param>
cBetriebshof::cBetriebshof(string bezeichnung, int number_of_tracks): cStreckenEndPunkt(bezeichnung)
{
	this->number_of_tracks = number_of_tracks;
}
