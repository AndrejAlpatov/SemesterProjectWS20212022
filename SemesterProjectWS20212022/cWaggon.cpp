#include "cWaggon.h"
#include <iostream>
using namespace std;

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="gewicht"></param>
cWaggon::cWaggon(double gewicht):cSchienenFahrzeug(gewicht)
{
}


/// <summary>
/// outputs in console "Zieh mich!"
/// </summary>
void cWaggon::ankuppeln()
{
	cout << "Zieh mich!" << endl;
}
