#include "cSchienenFahrzeug.h"

/// <summary>
/// Return the value of Variable "gewicht"
/// </summary>
/// <returns></returns>
double cSchienenFahrzeug::get_gewicht()
{
    return gewicht;
}


/// <summary>
/// Standard constructor
/// </summary>
/// <param name="gewicht"></param>
cSchienenFahrzeug::cSchienenFahrzeug(double gewicht)
{
    this->gewicht = gewicht;
}
