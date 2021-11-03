#include "cDieselLok.h"

/// <summary>
/// returns the value of the fuel quantity (2000.0)
/// </summary>
/// <returns></returns>
double cDieselLok::tanken()
{
	return 2000.0;
}


/// <summary>
/// provision of the locomotive
/// </summary>
/// <param name="stunden"></param>
/// <returns></returns>
double cDieselLok::bereitstellen(int stunden)
{
	spritMenge += tanken();
	int parameter_for_bereitstellen = stunden > (spritMenge / 200) ? stunden : (int)(spritMenge / 200);

	return cLokomotive::bereitstellen(parameter_for_bereitstellen);
}

cDieselLok::cDieselLok(double spritMenge, double triebkraft, double gewicht):cLokomotive(triebkraft, gewicht)
{
	this->spritMenge = spritMenge;
}
