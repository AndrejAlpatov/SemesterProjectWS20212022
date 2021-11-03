#pragma once
#include "cLokomotive.h"
class cDieselLok :
    public cLokomotive
{
    double spritMenge;

    double tanken();

public:
    double bereitstellen(int stunden);
    cDieselLok(double spritMenge = 0, double triebkraft = 6500.0, double gewicht = 50000);
};

