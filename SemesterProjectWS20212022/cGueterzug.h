#pragma once
#include "cZug.h"
#include "cGueterwagen.h"

namespace gueterzug {
    const int NUMBER_OF_WAGONS = 30;
}

/// <summary>
/// Class for Freight train
/// </summary>
class cGueterzug :
    public cZug
{
    cDieselLok locomotive;
    cGueterwagen waggons[gueterzug::NUMBER_OF_WAGONS];

public:
    cGueterzug(cGueterwagen *waggons, double spritMenge = 0, double triebkraft = 6500.0, double gewicht = 50000);
};

