//Semester project "Einsenbahngesellschaft"
//Alpatov Andrej
//2021-10-20

#include "cStreckenAbschnitt.h"
#include "cStreckenEndPunkt.h"

int main() {

	cStreckenAbschnitt array_of_route_sections[10];
	cStreckenEndPunkt array_of_route_end_points[10];

	for (int i = 0; i < 7; i++) {
		array_of_route_sections[i].eingabe();
		array_of_route_end_points[i].eingabe();
	}


	return 0;
}