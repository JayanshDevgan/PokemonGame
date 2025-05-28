#pragma once

#include <iostream>

#include "pokemon.h"

class BattleManager
{
public:
	void Battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
		std::cout << "A wild " << wildPokemon.m_name << " appered!" << std::endl;

		while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
			playerPokemon.attack(wildPokemon);
			
			if (!wildPokemon.isFainted()) {
				wildPokemon.attack(playerPokemon);
			}
		}

		if (playerPokemon.isFainted())
		{
			std::cout << playerPokemon.m_name << " has fainted! You lose the battle." << std::endl;
		}
		else
		{
			std::cout << "You defeate the wild " << wildPokemon.m_name << std::endl;
		}
	}

};

