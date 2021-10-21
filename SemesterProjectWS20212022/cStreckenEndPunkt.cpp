#include "cStreckenEndPunkt.h"
#include <iostream>
using namespace std;

/// <summary>
/// universal constructor
/// </summary>
/// <param name="bezeichnung"></param>
/// <param name="laenge"></param>
/// <param name="breite"></param>
cStreckenEndPunkt::cStreckenEndPunkt(string bezeichnung, double laenge, double breite): coordinates(laenge, breite)
{
	this->bezeichnung = bezeichnung;
}


/// <summary>
/// Output in console Values of class members
/// </summary>
void cStreckenEndPunkt::ausgabe()
{
	cout << "StreckenendPunkt\n"
		<< "Bezeichnung: " << bezeichnung << endl;

	coordinates.printGeoPos();
}


/// <summary>
/// Input Values for Class members
/// </summary>
void cStreckenEndPunkt::eingabe()
{
	double laenge;
	double breite;

	cout << "Geben Sie die Bezeichnung fuer den Streckenendpunkt ein" << endl;
	cin >> bezeichnung;
	cout << "Geben Sie geografische Laenge ein" << endl;
	cin >> laenge;
	cout << "Geben Sie geografische Breite ein" << endl;
	cin >> breite;

	coordinates.setGeoPos(laenge, breite);
}
