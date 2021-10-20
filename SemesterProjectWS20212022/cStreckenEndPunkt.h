#pragma once
#include <iostream>
#include <string>
using namespace std;

class cStreckenEndPunkt
{
	string bezeichnung;
	double laenge;
	double breite;

public:
	cStreckenEndPunkt(string bezeichnung = "Haltepunkt", double laenge = 0.0, double breite = 0.0);
	void ausgabe();
	void eingabe();
};

