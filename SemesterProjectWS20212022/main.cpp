//Semester project "Einsenbahngesellschaft"
//Alpatov Andrej
//2021-10-20

#include "cStreckenAbschnitt.h"
#include "cStreckenEndPunkt.h"

#define ARRAY_SIZE 2
#define NUMBER_OF_ELEMENTS_FOR_INPUT 2 //Must be <= ARRAY_SIZE

int main() {

	//cStreckenAbschnitt array_of_route_sections[ARRAY_SIZE];
	//cStreckenEndPunkt array_of_route_end_points[ARRAY_SIZE];

	//for (int i = 0; i < NUMBER_OF_ELEMENTS_FOR_INPUT; i++) {
	//	array_of_route_sections[i].eingabe();
	//	array_of_route_end_points[i].eingabe();
	//}

	//array_of_route_sections[0].ausgabe();
	//array_of_route_sections[1].ausgabe();

	cStreckenAbschnitt obj(56.58, 36.8, "first", 14.78, 5589.4, "second", 333, 1, 0);
	obj.ausgabe();
	cout << "Streckenlaenge: " << obj.getStreckenlaenge() << endl;

	return 0;
}