#include "cPersonenwagen.h"
#include <iostream>
using namespace std;

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="fahrgastZahl">The number of passengers</param>
/// <param name="gewicht">The weight of the couch</param>
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
/// If Parameter "Final Destination" is True outputs expression in console and set the number of passengers to 0
/// </summary>
/// <param name="endstation">If True -> final destination, else False</param>
void cPersonenwagen::aussteigen(bool endstation)
{
	if (endstation) {
		cout << "Endstation, bitte alle aussteigen" << std::endl;
		fahrgastZahl = 0;
	}
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
/// outputs in the console "Personenwagen: Heizschlauch verbinden Personenwagen: Steuerleitungen verbinden Zieh mich!"
/// 
/// overrides the member function in the class cWagon
/// </summary>
void cPersonenwagen::ankuppeln()
{
	cout << "Personenwagen: Heizschlauch verbinden\nPersonenwagen: Steuerleitungen verbinden\nZieh mich!" << endl;
}
