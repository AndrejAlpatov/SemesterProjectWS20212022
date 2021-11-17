//Semester project "Einsenbahngesellschaft"
//Alpatov Andrej
//2021-10-20

#include "cStreckenAbschnitt.h"
#include "cStreckenEndPunkt.h"
#include "cPersonenwagen.h"
#include "cGueterwagen.h"
#include "cDieselLok.h"
#include "cElektroLok.h"
#include "cBetriebshof.h"
#include "cGueterzug.h"
#include "cPersonenzug.h"

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

	//cStreckenAbschnitt obj(56.58, 36.8, "first", 14.78, 5589.4, "second", 333, 1, 0);
	//obj.ausgabe();
	//cout << "Streckenlaenge: " << obj.getStreckenlaenge() << endl;

	cGueterwagen packdrauf;
	cPersonenwagen pullman;
	cDieselLok v200;
	cElektroLok e03;


	// Mit den Objekten arbeiten:
	cout << "Startgewicht des Gueterwagens: " << packdrauf.get_gewicht() << endl;
	cout << "Startgewicht des Personenwagens: " << pullman.get_gewicht() << endl;
	cout << "Startgewicht der Diesellok: " << v200.get_gewicht() << endl;
	cout << "v200 wird bereitgestellt: " << v200.bereitstellen(6) << endl;
	cout << "e03 wird bereitgestellt: " << e03.bereitstellen(10) << endl;
	pullman.ankuppeln();
	packdrauf.ankuppeln();
	v200.ankuppeln();
	cout << "Ladung nach Aufladen 20000.0: " << packdrauf.zuladen(20000.0) << endl;
	cout << "Gewicht Gueterwagen danach: " << packdrauf.get_gewicht() << endl;
	cout << "Gaeste im Personenwagen nach Zusteigen 100: " << pullman.einsteigen(100)
		<< endl;
	cout << "Ende" << endl;

	cPersonenwagen waggons_for_passenger_train[] = {  cPersonenwagen(100, 40000.0), cPersonenwagen(200, 50000.0),
											cPersonenwagen(100, 40000.0), cPersonenwagen(100, 40000.0),
											cPersonenwagen(100, 40000.0), cPersonenwagen(100, 40000.0),
											cPersonenwagen(200, 50000.0), cPersonenwagen(200, 50000.0),
											cPersonenwagen(200, 50000.0), cPersonenwagen(200, 50000.0)};
							
	cGueterwagen waggons_for_freight_train[] = { cGueterwagen(10000.0, 60000.0), cGueterwagen(10000.0, 60000.0),
													cGueterwagen(10000.0, 60000.0), cGueterwagen(10000.0, 60000.0),
													cGueterwagen(10000.0, 60000.0), cGueterwagen(10000.0, 60000.0),
													cGueterwagen(10000.0, 60000.0), cGueterwagen(10000.0, 60000.0),
													cGueterwagen(10000.0, 60000.0), cGueterwagen(10000.0, 60000.0),
													cGueterwagen(20000.0, 70000.0), cGueterwagen(20000.0, 70000.0),
													cGueterwagen(20000.0, 70000.0), cGueterwagen(20000.0, 70000.0),
													cGueterwagen(20000.0, 70000.0), cGueterwagen(20000.0, 70000.0),
													cGueterwagen(20000.0, 70000.0), cGueterwagen(20000.0, 70000.0),
													cGueterwagen(20000.0, 70000.0), cGueterwagen(20000.0, 70000.0),
													cGueterwagen(30000.0, 80000.0), cGueterwagen(30000.0, 80000.0), 
													cGueterwagen(30000.0, 80000.0), cGueterwagen(30000.0, 80000.0),
													cGueterwagen(30000.0, 80000.0), cGueterwagen(30000.0, 80000.0),
													cGueterwagen(30000.0, 80000.0), cGueterwagen(30000.0, 80000.0),
													cGueterwagen(30000.0, 80000.0), cGueterwagen(30000.0, 80000.0)};

	cPersonenzug passenger_train(waggons_for_passenger_train, 100.0, 10000.0, 60000.0);
	cGueterzug freight_train(waggons_for_freight_train, 20000.0, 20000.0, 87000.0);
									
	cZug a;
	a.setZugNummer("A-105*");
	a.getZugNummer();


	return 0;
}