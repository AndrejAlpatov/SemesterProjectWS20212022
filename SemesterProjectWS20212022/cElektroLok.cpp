#include "cElektroLok.h"

/// <summary>
/// sets the StromAn attribute to true
/// </summary>
void cElektroLok::aufbuegeln()
{
	stromAn = true;
}


/// <summary>
/// 
/// </summary>
/// <param name="stunden">Hours</param>
/// <returns></returns>
double cElektroLok::bereitstellen(int stunden)
{
	aufbuegeln();

	int parameter_for_the_function = stunden * 2 * (int)stromAn;

	return cLokomotive::bereitstellen(parameter_for_the_function);
}


/// <summary>
/// Standard constructor
/// </summary>
/// <param name="stromAn">power on</param>
/// <param name="triebkraft">driving force</param>
/// <param name="gewicht">weight</param>
cElektroLok::cElektroLok(bool stromAn, double triebkraft, double gewicht):cLokomotive(triebkraft, gewicht)
{
	this->stromAn = stromAn;
}
