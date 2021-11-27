#pragma once
#include "cDieselLok.h"

/// <summary>
/// Base class for train
/// 
/// Contents only a locomotive. Wagons handled in derived classes
/// </summary>
class cZug
{
	cDieselLok lokomotive;

public:
	cZug(double spritMenge = 0, double triebkraft = 6500.0, double gewicht = 50000);
};

