#pragma once
#include "cWaggon.h"

/// <summary>
/// Coach
/// </summary>
class cPersonenwagen :
    public cWaggon
{
    int fahrgastZahl;

public:
    cPersonenwagen(int fahrgastZahl = 0, double gewicht = 50000.0);
    int einsteigen(int rein);
    int aussteigen(int raus);
    void aussteigen(bool endstation);
    int get_fahrgastZahl();
    void ankuppeln()override;

};

