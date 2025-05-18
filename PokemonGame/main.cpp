#include <iostream>
#include <string>

enum class PokemonChoice
{
	Charmander,
	Bulbasaur,
	Squirtle,
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
	std::string m_name;
	PokemonType m_type;
	int m_health;

	void attack() { std::cout << m_name << " attacks with a powerful move!"; }
};

class Player
{
public:
	std::string m_name;
	PokemonChoice m_chosenPokemon = PokemonChoice::InvalidChoice;

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
		std::getline(std::cin, player.m_name);
		std::cout << m_name << ": Ah, " << player.m_name << "! What a fantastic name!" << std::endl;
	}

	void chosedPokemon(Player& player)
	{
		switch (player.m_chosenPokemon)
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
			player.m_chosenPokemon = PokemonChoice::Charmander;
			std::cout << m_name << ": Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
			std::cout << m_name << ": Charmander";
			break;
		}
		std::cout << " and you, " << player.m_name << ", are going to be the best of friends!" << std::endl;
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