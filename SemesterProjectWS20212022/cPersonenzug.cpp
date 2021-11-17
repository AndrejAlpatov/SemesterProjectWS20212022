#include "cPersonenzug.h"

/// <summary>
/// Standard constructor
/// </summary>
/// <param name="waggons">Array of 10 class cPersonenwagen objects</param>
/// <param name="spritMenge">Fuel amount</param>
/// <param name="triebkraft">Driving force</param>
/// <param name="gewicht">Weight</param>
cPersonenzug::cPersonenzug(cPersonenwagen* waggons, double spritMenge, double triebkraft, double gewicht): locomotive(spritMenge, triebkraft, gewicht)
{
	for (int i = 0; i < personenzug::NUMBER_OF_WAGONS; i++)
	{
		this->waggons[i] = waggons[i];
	}
}
