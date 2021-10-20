#include "cStreckenEndPunkt.h"

/// <summary>
/// universal constructor
/// 
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
