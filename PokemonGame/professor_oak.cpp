#include "professor_oak.h"

void ProfessorOak::greetPlayer(Player& player)
{
	std::cout << m_name << ": Hello there! Welcome to the world of Pokemon!\n";
	waitForEnter();
	std::cout << m_name << ": My name is Oak. People call me the Pokemon Professor!\n";
	waitForEnter();
	std::cout << m_name << ": But enough about me. Let's talk about you!\n";
	waitForEnter();
}

void ProfessorOak::offerPokemonChoices(Player& player)
{
	std::cout << m_name << ": First, tell me, what’s your name? \t [Please Enter Your Name]\n";
	std::string player_name;
	std::getline(std::cin, player_name);
	player.setName(player_name);
	std::cout << m_name << ": Ah, " << player.getName() << "! What a fantastic name!" << std::endl;
	waitForEnter();

	std::cout << m_name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";
	waitForEnter();

	std::cout << m_name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
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

void ProfessorOak::explainMainQuest(Player& player)
{
	std::cout << "Professor Oak: Oak-ay " << player.getName() << ", I am about to explain you about your upcoming grand adventure." << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League." << std::endl;
	waitForEnter();
	std::cout << player.getName() << ": Wait... that sounds a lot like every other Pokémon game out there." << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: Shhh! Don't break the fourth wall " << player.getName() << "! This is serious business." << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << std::endl;
	waitForEnter();
	std::cout << player.getName() << ": Sounds like a walk in the park... right?" << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one." << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?" << std::endl;
	waitForEnter();
	std::cout << player.getName() << ": Ready as I’ll ever be, Professor!" << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: That’s the spirit! Now, your journey begins." << std::endl;
	waitForEnter();
	std::cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << std::endl;
	waitForEnter();
}