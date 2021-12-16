#pragma once
#include "cZug.h"
#include "cPersonenwagen.h"

namespace personenzug {
    const int NUMBER_OF_WAGONS = 10;
}

/// <summary>
/// Base class for passenger train
/// </summary>
class cPersonenzug :
    public cZug
{
    cPersonenwagen waggons[personenzug::NUMBER_OF_WAGONS];

public:
   cPersonenzug(cPersonenwagen * waggons, double spritMenge = 0, double triebkraft = 6500.0, double gewicht = 50000, string zug_numer = "1");
};

