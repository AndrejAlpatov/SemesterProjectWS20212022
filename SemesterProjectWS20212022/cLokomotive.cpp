#include "cLokomotive.h"
#include <iostream>
using namespace std;

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="triebkraft">driving force</param>
/// <param name="gewicht">weight</param>
cLokomotive::cLokomotive(double triebkraft, double gewicht): cSchienenFahrzeug(gewicht)
{
	this->triebkraft = triebkraft;
}


/// <summary>
/// Outputs in console "Ich ziehe alle!"
/// </summary>
void cLokomotive::ankuppeln()
{
	cout << "Ich ziehe alle!" << endl;
}


/// <summary>
/// returns weight + (hours * driving force)
/// </summary>
/// <param name="stunden">Hours</param>
/// <returns></returns>
double cLokomotive::bereitstellen(int stunden)
{
	return cSchienenFahrzeug::get_gewicht() + (stunden * triebkraft);
}
