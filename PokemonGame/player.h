#pragma once

#include <iostream>

#include "pokemon.h"
#include "utils.h"

class Player
{
public:
    Player();

    Player(const std::string& p_name, Pokemon p_chosenPokemon);

    Player(const Player& other);

    void chosenPokemon(int choice);

    std::string getName() const ;

    void setName(const std::string& p_name);

    Pokemon getChosenPokemon() const;

    void setChosenPokemon(Pokemon p_chosenPokemon);

private:
    std::string m_name;
    Pokemon m_chosenPokemon;
};
