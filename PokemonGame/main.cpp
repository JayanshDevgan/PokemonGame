#include <iostream>
#include <string>

enum class PokemonChoice
{
    Charmander,
    Bulbasaur,
    Squirtle,
    Pikachu,
    InvalidChoice
};

enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Earth,
    Normal
};

class Pokemon
{
public:
    Pokemon() {
        m_name = "Pikachu";
        m_type = PokemonType::Electric;
        m_health = 10;
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

    void attack() { std::cout << m_name << " attacks with a powerful move!" << std::endl; }

private:
    std::string m_name;
    PokemonType m_type;
    int m_health;
};

class Player
{
public:
    Player() {
        m_name = "Trainer";
        m_chosenPokemon = PokemonChoice::Pikachu;
    }

    Player(const std::string& p_name, PokemonChoice p_chosenPokemon) {
        m_name = p_name;
        m_chosenPokemon = p_chosenPokemon;
    }

    Player(const Player& other) {
        m_name = other.m_name;
        m_chosenPokemon = other.m_chosenPokemon;
    }

    void chosenPokemon()
    {
        int choice;

        std::cout << "\nChoose Your Pokemon: " << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            m_chosenPokemon = PokemonChoice::Bulbasaur;
            break;
        case 2:
            m_chosenPokemon = PokemonChoice::Charmander;
            break;
        case 3:
            m_chosenPokemon = PokemonChoice::Squirtle;
            break;
        default:
            m_chosenPokemon = PokemonChoice::InvalidChoice;
        }
    }

    std::string getName() const { return m_name; }

    void setName(const std::string& p_name) { m_name = p_name; }

    PokemonChoice getChosenPokemon() const { return m_chosenPokemon; }

    void setChosenPokemon(PokemonChoice p_chosenPokemon) { m_chosenPokemon = p_chosenPokemon; }

private:
    std::string m_name;
    PokemonChoice m_chosenPokemon;
};

class ProfessorOak
{
public:
    std::string m_name = "Professor Oak";

    void greetPlayer(Player& player)
    {
        std::cout << m_name << ": Hello there! Welcome to the world of Pokemon!" << std::endl;
        std::cout << m_name << ": My name is Oak. People call me the Pokemon Professor!" << std::endl;
        std::cout << m_name << ": But enough about me. Let's talk about you!" << std::endl;
        std::cout << m_name << ": First, tell me, what’s your name?" << std::endl;
        std::string player_name;
        std::getline(std::cin, player_name);
        player.setName(player_name);
        std::cout << m_name << ": Ah, " << player.getName() << "! What a fantastic name!" << std::endl;
    }

    void chosedPokemon(Player& player)
    {
        switch (player.getChosenPokemon())
        {
        case PokemonChoice::Bulbasaur:
            std::cout << m_name << ": A fiery choice! Charmander is yours!\n";
            std::cout << m_name << ": Charmander";
            break;
        case PokemonChoice::Charmander:
            std::cout << m_name << ": A fine choice! Bulbasaur is always ready to grow on you!\n";
            std::cout << m_name << ": Bulbasaur";
            break;
        case PokemonChoice::Squirtle:
            std::cout << m_name << ": Splendid! Squirtle will keep you cool under pressure!\n";
            std::cout << m_name << ": Squirtle";
            break;
        default:
            std::cout << m_name << ": Hmm, that doesn't seem right. Let me choose for you...\n";
            player.setChosenPokemon(PokemonChoice::Pikachu);
            std::cout << m_name << ": Just kidding! Let's go with Pikachu, the fiery dragon in the making!\n";
            std::cout << m_name << ": Pikachu";
            break;
        }
        std::cout << " and you, " << player.getName() << ", are going to be the best of friends!" << std::endl;
    }

    void offerPokemonChoices(Player& player)
    {
        std::cout << m_name << ": I have three Pokemon here with me. They're all quite feisty!" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Charmander - The fire type. A real hothead!" << std::endl;
        std::cout << "2. Bulbasaur - The grass type. Calm and collected!" << std::endl;
        std::cout << "3. Squirtle - The water type. Cool as a cucumber!" << std::endl;
        std::cout << std::endl;
        player.chosenPokemon();
        chosedPokemon(player);

        std::cout << m_name << ": Your journey begins now! Get ready to explore the vast world of Pokemon!" << std::endl;
    }
};

int main()
{
    Pokemon pokemon;
    Player player;
    ProfessorOak oak;

    oak.greetPlayer(player);
    oak.offerPokemonChoices(player);

    return 0;
}
