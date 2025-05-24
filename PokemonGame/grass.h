#pragma once

#include "pokemon.h"
#include "WildEncounterManager.h"

#include <vector>
#include <string>

struct Grass
{
	std::vector<Pokemon> wildPokemonList;
	std::string environment;
	int encounterRate;
};