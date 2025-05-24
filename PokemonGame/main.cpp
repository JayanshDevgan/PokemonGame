#include "utils.h"
#include "player.h"
#include "pokemon.h"
#include "professor_oak.h"
#include "game.h"

#include <limits>


int main()
{
    Pokemon charmender("Charmander", PokemonType::FIRE, 100);
    ProfessorOak oak;
    Player player("Ash", charmender);

    oak.greetPlayer(player);
    oak.offerPokemonChoices(player);

    oak.explainMainQuest(player);

    Game game;
    game.gameLoop(player);

    return 0;
}
