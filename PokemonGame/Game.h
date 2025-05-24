#pragma once

#include "player.h"
#include "WildEncounterManager.h";

class Player;

class Game
{
public:
	Game() 
	{
        Grass forestGrass = {
            {{"Pidgey", PokemonType::NORMAL, 40}, {"Caterpie", PokemonType::BUG, 35}},
            "Forest",
            70
        };

        Grass caveGrass = {
            {{"Zubat", PokemonType::POISON, 30},  {"Geodude", PokemonType::ROCK, 50}},
            "Cave",
            80
        };
	}
	void gameLoop(Player& player);
private:
    Grass forestGrass;
};

