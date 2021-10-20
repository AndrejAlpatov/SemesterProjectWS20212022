#include "cStreckenAbschnitt.h"

cStreckenAbschnitt::cStreckenAbschnitt(int nummer_des_streckenabschnitts, bool elektrifiziert, bool belegt)
{
	this->nummer_des_streckenabschnitts = nummer_des_streckenabschnitts;
	this->elektrifiziert = elektrifiziert;
	this->belegt = belegt;
}
