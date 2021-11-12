#pragma once
#include "cStreckenEndPunkt.h"
class cEndBahnhof :
    public cStreckenEndPunkt
{
    int number_of_tracks;
    double duration_of_turning_process;

public:
    cEndBahnhof(string bezeichnung = "Endbahnhof", double duration_of_turning_process = 8.0, int numner_of_tracks=2);
};

