#pragma once
#include "cSchienenFahrzeug.h"

/// <summary>
/// Base class for wagons
/// </summary>
class cWaggon :
    public cSchienenFahrzeug
{
public:
    cWaggon(double gewicht = 50000.0);
    virtual void ankuppeln();
};

