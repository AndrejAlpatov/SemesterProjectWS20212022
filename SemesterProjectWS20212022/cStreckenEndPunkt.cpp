#include "cStreckenEndPunkt.h"
#include <iostream>
using namespace std;

/// <summary>
/// universal constructor
/// </summary>
/// <param name="bezeichnung"></param>
/// <param name="laenge"></param>
/// <param name="breite"></param>
cStreckenEndPunkt::cStreckenEndPunkt(string bezeichnung, double laenge, double breite)
{
	this->bezeichnung = bezeichnung;
	this->laenge = laenge;
	this->breite = breite;
}


/// <summary>
/// Output in console Values of class members
/// </summary>
void cStreckenEndPunkt::ausgabe()
{
	cout << "StreckenendPunkt\n"
		<< "Bezeichnung: " << bezeichnung
		<< "\nGeografische Laenge: " << laenge
		<< "\nGeografische Breite: " << breite << endl;
}
