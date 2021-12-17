#include "global.h"

cPersonenwagen waggons_for_passenger_train[] = { cPersonenwagen(100, 40000.0), cPersonenwagen(200, 50000.0),
										cPersonenwagen(100, 40000.0), cPersonenwagen(100, 40000.0),
										cPersonenwagen(100, 40000.0), cPersonenwagen(100, 40000.0),
										cPersonenwagen(200, 50000.0), cPersonenwagen(200, 50000.0),
										cPersonenwagen(200, 50000.0), cPersonenwagen(200, 50000.0) };

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
												cGueterwagen(30000.0, 80000.0), cGueterwagen(30000.0, 80000.0) };

cStreckenEndPunkt railway_stations[] = { cEndBahnhof("Mainz", 8.247253, 49.992863, 10.0, 10),
										cBahnhof("Frankfurt M", 8.682127, 50.110924, 12, 8),
										cBahnhof("Mannheim", 8.469167, 49.488888, 14, 6),
										cBahnhof("Stuttgart", 9.183333, 48.783333, 16, 10),
										cBahnhof("Ulm ", 9.983333, 48.400002, 6, 4),
										cBahnhof("Guenzburg", 10.276285, 48.454650, 4,2),
										cBahnhof("Augsburg", 10.894446, 48.366512, 4, 3),
										cBetriebshof("Muenchen", 14)
};

const int NUMBER_OF_TRAINS = 2;