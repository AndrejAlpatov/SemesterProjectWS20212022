#include "cZug.h"

/// <summary>
/// Deletes the non-alphanumeric characters from the string and return the string without them
/// </summary>
/// <param name="strint_to_correction">string to be without non-alphanumeric characters</param>
/// <returns>String consists only of alphanumeric characters</returns>
string cZug::correction_of_train_number(string strint_to_correction)
{
	strint_to_correction.erase(std::remove_if(strint_to_correction.begin(), strint_to_correction.end(),
		[](auto const& c) -> bool { return !std::isalnum(c); }), strint_to_correction.end());

	return strint_to_correction;
}


/// <summary>
/// Standard constructor of the train
/// </summary>
/// <param name="spritMenge">Fuel amount of locomotive</param>
/// <param name="triebkraft">Driving force of locomotive</param>
/// <param name="gewicht">Weight of locomotive</param>
cZug::cZug(double spritMenge, double triebkraft, double gewicht, string zugnummer):lokomotive(spritMenge, triebkraft, gewicht)
{
	this->zug_nummer = zugnummer;
}


/// <summary>
/// Return the train number
/// </summary>
/// <returns>train number</returns>
string cZug::getZugNummer()
{
	return zug_nummer;
}


/// <summary>
/// Set the number of Train (for user)
/// </summary>
void cZug::setZugNummer(string trainNumber)
{
	zug_nummer = correction_of_train_number(trainNumber); //delete the non-alphanumeric characters
}
