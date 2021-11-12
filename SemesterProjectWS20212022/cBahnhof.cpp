#include "cBahnhof.h"

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="bezeichnung">The name of the station</param>
/// <param name="number_of_tracks">The number of tracks, that can be simultaneously on the station</param>
/// <param name="min_stop_duration">The minimal duration of train stop</param>
cBahnhof::cBahnhof(string bezeichnung, int number_of_tracks, int min_stop_duration) : cStreckenEndPunkt(bezeichnung)
{
	this->number_of_tracks = number_of_tracks;
	this->min_stop_duration = min_stop_duration
		;
}
