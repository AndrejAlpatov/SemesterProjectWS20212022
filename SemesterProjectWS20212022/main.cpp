//Semester project "Einsenbahngesellschaft"
//Alpatov Andrej
//2021-10-20

#include "cStreckenAbschnitt.h"
#include "cStreckenEndPunkt.h"

#define ARRAY_SIZE 10

int main() {

	cStreckenAbschnitt array_of_route_sections[ARRAY_SIZE];
	cStreckenEndPunkt array_of_route_end_points[ARRAY_SIZE];

	for (int i = 0; i < 1; i++) {
		array_of_route_sections[i].eingabe();
		array_of_route_end_points[i].eingabe();
	}


	return 0;
}