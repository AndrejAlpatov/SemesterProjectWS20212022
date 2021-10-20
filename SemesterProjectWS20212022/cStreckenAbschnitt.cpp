#include "cStreckenAbschnitt.h"
#include <iostream>
#include <string>

using namespace std;

cStreckenAbschnitt::cStreckenAbschnitt(int nummer_des_streckenabschnitts, bool elektrifiziert, bool belegt)
{
	this->nummer_des_streckenabschnitts = nummer_des_streckenabschnitts;
	this->elektrifiziert = elektrifiziert;
	this->belegt = belegt;
}

/// <summary>
/// Output of the route section values
/// 
/// Number of section
/// Electrified
/// Occupied
/// </summary>
void cStreckenAbschnitt::ausgabe()
{
	string electrifiziert_string, belegt_string;
	electrifiziert_string = elektrifiziert ? "Ja" : "Nein";
	belegt_string = belegt ? "Ja" : "Nein";


	cout << "Nummer des Streckenabschnitts: " << nummer_des_streckenabschnitts
		<< "\nElektrifiziert: " << electrifiziert_string
		<< "\nBelegt: " << belegt_string << endl;
}
