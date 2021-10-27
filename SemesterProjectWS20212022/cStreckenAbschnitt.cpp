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
cStreckenAbschnitt::cStreckenAbschnitt(cStreckenEndPunkt end_punkt_1 , cStreckenEndPunkt end_punkt_2, int nummer_des_streckenabschnitts
				, bool elektrifiziert, bool belegt)
{
	this->nummer_des_streckenabschnitts = nummer_des_streckenabschnitts;
	this->elektrifiziert = elektrifiziert;
	this->belegt = belegt;
	end_punkt[0] = end_punkt_1;
	end_punkt[0] = end_punkt_2;
}

cStreckenAbschnitt::cStreckenAbschnitt(double endpunkt_1_longitude, double endpunkt_1_latitude, string endpunkt_1_bezeichnung
	, double endpunkt_2_longitude, double endpunkt_2_latitude, string endpunkt_2_bezeichnung, int nummer_des_streckenabschnitts
	, bool elektrifiziert, bool belegt)
{
	end_punkt[0] = cStreckenEndPunkt(endpunkt_1_bezeichnung, endpunkt_1_longitude, endpunkt_1_latitude);
	end_punkt[1] = cStreckenEndPunkt(endpunkt_2_bezeichnung, endpunkt_2_longitude, endpunkt_2_latitude);
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

	end_punkt[0].ausgabe();
	end_punkt[1].ausgabe();
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
