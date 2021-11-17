#include "cGueterzug.h"

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="waggons">Array of 10 class cGueterwagen objects</param>
/// <param name="spritMenge">Fuel amount</param>
/// <param name="triebkraft">Driving force</param>
/// <param name="gewicht">Weight</param>
cGueterzug::cGueterzug(cGueterwagen *waggons, double spritMenge, double triebkraft, double gewicht):locomotive(spritMenge, triebkraft, gewicht)
{
	for (int i=0; i < gueterzug::NUMBER_OF_WAGONS; i++)
	{
		this->waggons[i] = waggons[i];
	}
}
