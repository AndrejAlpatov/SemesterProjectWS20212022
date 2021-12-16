#include "cBahnhof.h"

/// <summary>
/// Universal constructor
/// </summary>
/// <param name="bezeichnung">The name of the station</param>
/// <param name="laenge">geographical coordinate longitude</param>
/// <param name="breite">geographical coordinate latitude</param>
/// <param name="number_of_tracks">The number of tracks, that can be simultaneously on the station</param>
/// <param name="min_stop_duration">The minimal duration of train stop</param>
cBahnhof::cBahnhof(string bezeichnung, double laenge, double breite, int number_of_tracks, int min_stop_duration):
																								cStreckenEndPunkt(bezeichnung, laenge, breite)
{
	this->number_of_tracks = number_of_tracks;
	this->min_stop_duration = min_stop_duration;
}
