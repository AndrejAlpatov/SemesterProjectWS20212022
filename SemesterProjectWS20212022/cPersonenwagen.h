#pragma once
#include "cWaggon.h"
class cPersonenwagen :
    public cWaggon
{
    int fahrgastZahl;

public:
    cPersonenwagen(int fahrgastZahl = 0, double gewicht = 50000.0);
    int einsteigen(int rein);
    int aussteigen(int raus);
    int get_fahrgastZahl();
};

