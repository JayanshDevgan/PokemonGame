#pragma once

#include "grass.h"

#include <vector>
#include <cstdlib>
#include <time.h>

class WildEncounterManager
{
public:
	WildEncounterManager()
	{
		srand(time(0));
	}

	Pokemon getRandomPokemonFromGrass(const Grass& grass);
};