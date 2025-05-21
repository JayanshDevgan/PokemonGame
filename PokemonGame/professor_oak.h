#pragma once

#include <iostream>
#include <string>

#include "utils.h"
#include "player.h"

class ProfessorOak
{
public:
    std::string m_name = "Professor Oak";

    void greetPlayer(Player& player);

    void offerPokemonChoices(Player& player);

    void explainMainQuest(Player& player);
};