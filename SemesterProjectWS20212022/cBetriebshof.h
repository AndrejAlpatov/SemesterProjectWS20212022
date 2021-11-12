#pragma once
#include "cStreckenEndPunkt.h"
class cBetriebshof :
    public cStreckenEndPunkt
{
    int number_of_tracks;

public:
    cBetriebshof(string bezeichnung = "Betriebshof", int number_of_tracks = 2);
};

