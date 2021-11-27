#include "cEndBahnhof.h"

cEndBahnhof::cEndBahnhof(string bezeichnung, double duration_of_turning_process, int numner_of_tracks): cStreckenEndPunkt(bezeichnung)
{
	this->duration_of_turning_process = duration_of_turning_process;
	this->number_of_tracks = number_of_tracks;
}
