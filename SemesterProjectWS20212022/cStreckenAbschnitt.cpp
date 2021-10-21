#include "cStreckenAbschnitt.h"
#include <iostream>
#include <string>
using namespace std;


/// <summary>
/// Universal constructor
/// 
/// </summary>
/// <param name="nummer_des_streckenabschnitts">The index of route section</param>
/// <param name="elektrifiziert">The section is electrified True / False </param>
/// <param name="belegt">The section is occupied True/ False</param>
cStreckenAbschnitt::cStreckenAbschnitt(int nummer_des_streckenabschnitts, bool elektrifiziert, bool belegt)
{
	this->nummer_des_streckenabschnitts = nummer_des_streckenabschnitts;
	this->elektrifiziert = elektrifiziert;
	this->belegt = belegt;
}


/// <summary>
/// Output of the route section values
/// 
/// (Index of the section, Electrified Yes/No, Occupied Yes/No)
/// </summary>
void cStreckenAbschnitt::ausgabe()
{
	string electrifiziert_string, belegt_string;
	electrifiziert_string = elektrifiziert ? "Ja" : "Nein"; //change not readable values of variables to user friendly
	belegt_string = belegt ? "Ja" : "Nein";


	cout << "Nummer des Streckenabschnitts: " << nummer_des_streckenabschnitts
		<< "\nElektrifiziert: " << electrifiziert_string
		<< "\nBelegt: " << belegt_string << endl;
}

/// <summary>
/// Input Values for class members
/// </summary>
void cStreckenAbschnitt::eingabe()
{
	int temp;

	cout << "Geben Sie die Nummer des Streckenabschnitts ein (muss ganze Zahl sein)\n";
	cin >> temp;
	nummer_des_streckenabschnitts = temp >= 0 ? temp : temp * -1; //if the input has a negative value, then change to positive
	cout << "Ist der Streckenabschnitt elektrifiziert? (JA - 1, NEIN - 0)?\n";
	cin >> temp;
	elektrifiziert = temp < 1 ? false : true; //Processing of possibly incorrectly entered values
	cout << "Ist der Streckenabschnitt belegt (JA - 1, NEIN - 0)?\n";
	cin >> temp;
	belegt = temp < 1 ? false : true; //Processing of possibly incorrectly entered values
}
