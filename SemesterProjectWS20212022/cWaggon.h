#pragma once
#include "cSchienenFahrzeug.h"
class cWaggon :
    public cSchienenFahrzeug
{
public:
    cWaggon(double gewicht = 50000.0);
    void ankuppeln();
};

