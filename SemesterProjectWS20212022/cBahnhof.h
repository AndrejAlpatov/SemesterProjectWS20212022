#pragma once
#include "cStreckenEndPunkt.h"
class cBahnhof :
    public cStreckenEndPunkt
{
    int number_of_tracks;
    int min_stop_duration;

public:
    cBahnhof(string bezeichnung = "Bahnhof", double laenge = 0.0, double breite = 0.0, int number_of_tracks = 2, int min_stop_duration = 120);
};

