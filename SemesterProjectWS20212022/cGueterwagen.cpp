#include "cGueterwagen.h"

/// <summary>
/// standard constructor
/// </summary>
/// <param name="nutzlast">Payload of the freight wagon</param>
/// <param name="gewicht">weight of the freight wagon</param>
cGueterwagen::cGueterwagen(double nutzlast, double gewicht):cWaggon(gewicht)
{
	this->nutzlast = nutzlast;
}


/// <summary>
/// Adds the weight of the load to the existing one and returns the new value
/// </summary>
/// <param name="lastplus">weight to be added</param>
/// <returns>new value of payload</returns>
double cGueterwagen::zuladen(double lastplus)
{
	nutzlast = nutzlast + lastplus > 200000.0 ? 200000.0 : nutzlast + lastplus; //limited <=200 000.0
	return nutzlast;
}


/// <summary>
/// Subtracts the weight of the load from the available one and returns the new value
/// </summary>
/// <param name="lastweg">weight to be subtracted</param>
/// <returns>new value of payload</returns>
double cGueterwagen::abladen(double lastweg)
{
	nutzlast = nutzlast - lastweg < 0.0 ? 0.0 : nutzlast - lastweg; //limited >=0.0
	return nutzlast;
}


/// <summary>
/// returns the sum of weight and payload of freight wagon
/// </summary>
/// <returns>sum of weight and payload of freight wagon</returns>
double cGueterwagen::get_gewicht()
{
	return cWaggon::get_gewicht() + nutzlast;
}
