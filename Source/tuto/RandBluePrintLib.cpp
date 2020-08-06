// Fill out your copyright notice in the Description page of Project Settings.


#include "RandBluePrintLib.h"
#include <cstdlib>
#include <ctime>

float URandBluePrintLib::RandNumberFromZero(const float max) {
	srand(static_cast <unsigned> (time(0)));
	return static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / max));
}