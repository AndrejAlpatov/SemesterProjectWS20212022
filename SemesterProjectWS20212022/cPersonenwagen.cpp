#include "cPersonenwagen.h"
#include <iostream>
using namespace std;

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="fahrgastZahl"></param>
/// <param name="gewicht"></param>
cPersonenwagen::cPersonenwagen(int fahrgastZahl, double gewicht):cWaggon(gewicht)
{
	this->fahrgastZahl = fahrgastZahl;
}


/// <summary>
/// Increase in the number of passengers by the number of passengers entered
/// </summary>
/// <param name="rein">passengers in</param>
/// <returns>new value of passengers</returns>
int cPersonenwagen::einsteigen(int rein)
{
	fahrgastZahl = fahrgastZahl + rein > 117 ? 117 : fahrgastZahl + rein; //limited <=117
	
	return fahrgastZahl;
}


/// <summary>
/// Reducing the number of passengers by the number of passengers who left
/// </summary>
/// <param name="raus">passengers out</param>
/// <returns>new number of passengers</returns>
int cPersonenwagen::aussteigen(int raus)
{
	fahrgastZahl = fahrgastZahl - raus < 0 ? 0 : fahrgastZahl - raus; //limited >=0

	return fahrgastZahl;
}


/// <summary>
/// returns the number of passengers
/// </summary>
/// <returns></returns>
int cPersonenwagen::get_fahrgastZahl()
{
	return fahrgastZahl;
}


/// <summary>
/// output in the console "Personenwagen: Heizschlauch verbinden Personenwagen: Steuerleitungen verbinden Zieh mich!"
/// 
/// overrides the member function in the class cWagon
/// </summary>
void cPersonenwagen::ankuppeln()
{
	cout << "Personenwagen: Heizschlauch verbinden\nPersonenwagen: Steuerleitungen verbinden\nZieh mich!" << endl;
}
