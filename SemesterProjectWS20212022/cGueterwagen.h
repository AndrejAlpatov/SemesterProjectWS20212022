#pragma once
#include "cWaggon.h"

/// <summary>
/// Freight rail car
/// </summary>
class cGueterwagen :
    public cWaggon
{
    double nutzlast;

public:
    cGueterwagen(double nutzlast = 0.0, double gewicht = 50000.0);
    double zuladen(double lastplus);
    double abladen(double lastweg);
    double get_gewicht();
};

