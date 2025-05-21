#include <iostream>
#include <string>


void ClearConsole()
{
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}

void waitForEnter() { std::cin.get(); ClearConsole(); }

enum class PokemonChoice
{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU
};

enum class PokemonType
{
    FIRE,
    GRASS,
    ELECTRIC,
    WATER,
    EARTH,
    NORMAL
};

class Pokemon
{
public:
    std::string m_name;
    PokemonType m_type;
    int m_health;

    Pokemon() {
        m_name = "Unknown";
        m_type = PokemonType::NORMAL;
        m_health = 50;
    }

    Pokemon(const std::string& p_name, PokemonType p_type, int p_health) {
        m_name = p_name;
        m_type = p_type;
        m_health = p_health;
    }

    Pokemon(const Pokemon& other) {
        m_name = other.m_name;
        m_type = other.m_type;
        m_health = other.m_health;
    }

    ~Pokemon() {}

    void attack() { std::cout << m_name << " attacks with a powerful move!" << std::endl; }
};

class Player
{
public:
    Player() {
        m_name = "Trainer";
        m_chosenPokemon = Pokemon();
    }

    Player(const std::string& p_name, Pokemon p_chosenPokemon) {
        m_name = p_name;
        m_chosenPokemon = p_chosenPokemon;
    }

    Player(const Player& other) {
        m_name = other.m_name;
        m_chosenPokemon = other.m_chosenPokemon;
    }

    void chosenPokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::CHARMANDER:
            m_chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::BULBASAUR:
            m_chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::SQUIRTLE:
            m_chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;
        default:
            m_chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
            break;
        }
        std::cout << "Player " << m_name << " chose " << m_chosenPokemon.m_name << "!\n";
        waitForEnter();
    }

    std::string getName() const { return m_name; }

    void setName(const std::string& p_name) { m_name = p_name; }

    Pokemon getChosenPokemon() const { return m_chosenPokemon; }

    void setChosenPokemon(Pokemon p_chosenPokemon) { m_chosenPokemon = p_chosenPokemon; }

private:
    std::string m_name;
    Pokemon m_chosenPokemon;
};

class ProfessorOak
{
public:
    std::string m_name = "Professor Oak";

    void greetPlayer(Player& player)
    {
        std::cout << m_name << ": Hello there! Welcome to the world of Pokemon!\n";
        waitForEnter();
        std::cout << m_name << ": My name is Oak. People call me the Pokemon Professor!\n";
        waitForEnter();
        std::cout << m_name << ": But enough about me. Let's talk about you!\n";
        waitForEnter();
    }

    void offerPokemonChoices(Player& player)
    {
        std::cout << m_name << ": First, tell me, what�s your name? \t [Please Enter Your Name]\n";
        std::string player_name;
        std::getline(std::cin, player_name);
        player.setName(player_name);
        std::cout << m_name << ": Ah, " << player.getName() << "! What a fantastic name!" << std::endl;
        waitForEnter();
        
        std::cout << m_name << ": You must be eager to start your adventure. But first, you�ll need a Pokemon of your own!\n";
        waitForEnter();

        std::cout << m_name << ": I have three Pokemon here with me. They�re all quite feisty!\n";
        waitForEnter();
        std::cout << m_name << ": Choose wisely...\n";
        std::cout << "1. Charmander - The fire type. A real hothead!\n";
        std::cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        std::cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
        
        int choice;
        std::cout << m_name << ": So, which one will it be? Enter the number of your choice: ";
        std::cin >> choice;

        player.chosenPokemon(choice);
        waitForEnter();
    }

    void explainMainQuest(Player& player)
    {
        std::cout << "Professor Oak: Oak-ay " << player.getName() << ", I am about to explain you about your upcoming grand adventure." << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: You see, becoming a Pok�mon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really don�t have a choice) is to collect all the Pok�mon Badges and conquer the Pok�mon League." << std::endl;
        waitForEnter();
        std::cout << player.getName() << ": Wait... that sounds a lot like every other Pok�mon game out there." << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: Shhh! Don't break the fourth wall " << player.getName() << "! This is serious business." << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: To achieve this, you�ll need to battle wild Pok�mon, challenge gym leaders, and of course, keep your Pok�mon healthy at the PokeCenter." << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: Along the way, you'll capture new Pok�mon to strengthen your team. Just remember�there�s a limit to how many Pok�mon you can carry, so choose wisely!" << std::endl;
        waitForEnter();
        std::cout << player.getName() << ": Sounds like a walk in the park... right?" << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: Hah! That�s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let�s just say you'll be starting from square one." << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: So, what do you say? Are you ready to become the next Pok�mon Champion?" << std::endl;
        waitForEnter();
        std::cout << player.getName()  << ": Ready as I�ll ever be, Professor!" << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: That�s the spirit! Now, your journey begins." << std::endl;
        waitForEnter();
        std::cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << std::endl;
        waitForEnter();
    }
};

void gameLoop(Player& player)
{
    int choice;
    bool keepPlaying = true;

    while (keepPlaying)
    {
        ClearConsole();

        std::cout << "\nWhat would you like to do next, " << player.m_name << "?\n";
        std::cout << "1. Battle Wild Pok�mon\n";
        std::cout << "2. Visit PokeCenter\n";
        std::cout << "3. Challenge Gyms\n";
        std::cout << "4. Enter Pok�mon League\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
        case 1:
            std::cout << "You look around... but all the wild Pok�mon are on "
                "vacation. Maybe try again later?\n";
            break;
        case 2:
            std::cout
                << "You head to the PokeCenter, but Nurse Joy is out on a coffee "
                "break. Guess your Pok�mon will have to tough it out for now!\n";
            break;
        case 3:
            std::cout << "You march up to the Gym, but it's closed for renovations. "
                "Seems like even Gym Leaders need a break!\n";
            break;
        case 4:
            std::cout << "You boldly step towards the Pok�mon League... but the "
                "gatekeeper laughs and says, 'Maybe next time, champ!'\n";
            break;
        case 5:
            std::cout << "You try to quit, but Professor Oak's voice echoes: "
                "'There's no quitting in Pok�mon training!'\n";
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

int main()
{
    Pokemon charmender("Charmander", PokemonType::FIRE, 100);
    ProfessorOak oak;
    Player player("Ash", charmender);

    oak.greetPlayer(player);
    oak.offerPokemonChoices(player);

    oak.explainMainQuest(player);

    std::cout << "\n[Placeholder for the Game Loop]\n";

    return 0;
}
