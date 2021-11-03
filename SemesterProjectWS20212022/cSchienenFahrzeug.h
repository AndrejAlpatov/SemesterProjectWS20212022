#pragma once

/// <summary>
/// Rail vehicle. Base class for inheritance
/// </summary>
class cSchienenFahrzeug
{
	double gewicht;

public:
	cSchienenFahrzeug(double gewicht = 50000.0);
	double get_gewicht();
};

