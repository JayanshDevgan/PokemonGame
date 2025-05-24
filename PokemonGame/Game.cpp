#include "Game.h"
#include "grass.h"

void Game::gameLoop(Player& player)
{
    int choice;
    bool keepPlaying = true;

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

    while (keepPlaying)
    {
        ClearConsole();

        std::cout << "\nWhat would you like to do next, " << player.getName() << "?\n";
        std::cout << "1. Battle Wild Pokémon\n";
        std::cout << "2. Visit PokeCenter\n";
        std::cout << "3. Challenge Gyms\n";
        std::cout << "4. Enter Pokémon League\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
        case 1:
            std::cout << "You look around... but all the wild Pokémon are on "
                "vacation. Maybe try again later?\n";
            break;
        case 2:
            std::cout
                << "You head to the PokeCenter, but Nurse Joy is out on a coffee "
                "break. Guess your Pokémon will have to tough it out for now!\n";
            break;
        case 3:
            std::cout << "You march up to the Gym, but it's closed for renovations. "
                "Seems like even Gym Leaders need a break!\n";
            break;
        case 4:
            std::cout << "You boldly step towards the Pokémon League... but the "
                "gatekeeper laughs and says, 'Maybe next time, champ!'\n";
            break;
        case 5:
            std::cout << "You try to quit, but Professor Oak's voice echoes: "
                "'There's no quitting in Pokémon training!'\n";
            std::cout << "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            std::cin >> quitChoice;
            if (quitChoice == 'y' || quitChoice == 'Y') {
                keepPlaying = false;
            }
            break;
        default:
            std::cout << "That's not a valid choice. Try again!\n";
            break;
        }
        waitForEnter();
    }

    std::cout << "Goodbye, " << player.getName() << "! Thanks for playing!\n";
}