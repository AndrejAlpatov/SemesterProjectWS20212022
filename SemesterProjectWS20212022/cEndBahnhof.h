#pragma once
#include "cStreckenEndPunkt.h"

/// <summary>
/// Class for Railway end station
/// </summary>
class cEndBahnhof :
    public cStreckenEndPunkt
{
    int number_of_tracks;
    double duration_of_turning_process;

public:
    cEndBahnhof(string bezeichnung = "Endbahnhof", double laenge = 0.0, double breite = 0.0, double duration_of_turning_process = 8.0,
                                                                                                                            int number_of_tracks=2);
};

