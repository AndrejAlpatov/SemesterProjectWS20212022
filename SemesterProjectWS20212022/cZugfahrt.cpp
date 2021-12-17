#include "cZugfahrt.h"

/// <summary>
/// Universal Constructor
/// </summary>
/// <param name="array_of_trains">Array of trains. Could be a cPersonenzug or cGueterzug</param>
/// <param name="array_of_stations">Array of stations. Could be a cBahhof, cBetriebshof or cEndBahnhof</param>
cZugfahrt::cZugfahrt(cZug* array_of_trains[], cStreckenEndPunkt* array_of_stations)
{
	string zug_nummer;
	int zug_nummer_is_valid = 0;

	// Requesting data from the user about the train number
	while (!zug_nummer_is_valid) // Repeat until correct data is entered
	{
		cout << "Geben Sie die Zugnummer ein.\nIhnen stehen folgende Zuege zur Vervuegung: ICE699, GZ001" << endl;
		cin >> zug_nummer;

		// Initialization of a member variable with a train value corresponding to the number entered by the user
		for (int i = 0; i < NUMBER_OF_TRAINS; i++) {
			if (array_of_trains[i]->getZugNummer() == zug_nummer)
			{
				zug = array_of_trains[i];
				zug_nummer_is_valid = 1; // The train number was entered by the user correctly
			}

			// An error message if the train number was entered by the user incorrectly
			if (i == NUMBER_OF_TRAINS - 1 && zug_nummer_is_valid == 0)
				cout << "FEHLER!!! Die ZZUgnummer war falsch eingegeben" << endl;
		}
	}

}
