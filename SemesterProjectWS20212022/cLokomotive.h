#pragma once
#include "cSchienenFahrzeug.h"

/// <summary>
/// Base class for locomotive
/// </summary>
class cLokomotive :
    public cSchienenFahrzeug
{
    double triebkraft;

public:
    cLokomotive(double triebkraft = 6500.0, double gewicht = 50000.0);

    void ankuppeln();
    double bereitstellen(int stunden);
};

