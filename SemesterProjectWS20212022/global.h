#pragma once

#ifndef MY_GLOBALS_H
#define MY_GLOBALS_H

#include "cPersonenwagen.h"
#include "cGueterwagen.h"
#include "cPersonenzug.h"
#include "cGueterzug.h"


// This is a declaration of variables, which tells the linker this value
// is found elsewhere.  Anyone who wishes to use it must include global.h,
// either directly or indirectly.

extern cPersonenwagen waggons_for_passenger_train[];
extern cGueterwagen waggons_for_freight_train[];


#endif