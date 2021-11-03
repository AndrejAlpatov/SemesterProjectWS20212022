#pragma once
#include "cLokomotive.h"

/// <summary>
/// Electric locomotive
/// </summary>
class cElektroLok :
    public cLokomotive
{
    bool stromAn;

    void aufbuegeln();

public:
    double bereitstellen(int stunden);
    cElektroLok(bool stromAn = false, double triebkraft = 6500.0, double gewicht = 50000.0);
};

