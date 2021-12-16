#include "cEndBahnhof.h"

/// <summary>
/// Universal constructor
/// </summary>
/// <param name="bezeichnung">The name of section end point</param>
/// <param name="laenge">geographical coordinate longitude</param>
/// <param name="breite">geographical coordinate latitude</param>
/// <param name="duration_of_turning_process">Duration of a turning process in minutes</param>
/// <param name="number_of_tracks">Number of sidings</param>
cEndBahnhof::cEndBahnhof(string bezeichnung, double laenge, double breite, double duration_of_turning_process, int number_of_tracks):
																									cStreckenEndPunkt(bezeichnung, laenge, breite)
{
	this->duration_of_turning_process = duration_of_turning_process;
	this->number_of_tracks = number_of_tracks;
}
