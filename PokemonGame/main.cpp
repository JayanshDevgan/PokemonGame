#include <iostream>
#include <string>

int main()
{
	std::string player_name, chosen_pokemon;
	std::cout << "Player Name: ";
	std::cin >> player_name;

	int choice;
	std::cout << "Professor Oak: Welcome to the world of Pokémon! I am Professor Oak.\n";
	std::cout << "Professor Oak: You can choose one of the following Pokémon:\n";
	std::cout << "1: Bulbasaur!\n2: Charmander!\n3: Squirtle!";
	std::cout << "\nChoose Your Pokemon: " << std::endl;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		std::cout << "Professor Oak: Bulbasaur! A wise choice.\n";
		chosen_pokemon = "Bulbasaur";
	case 2:
		std::cout << "Professor Oak: Charmander! A fiery choice.\n";
		chosen_pokemon = "Carmander";
	case 3:
		std::cout << "Professor Oak: Squirtle! A cool choice.\n";
		chosen_pokemon = "Squirtle";
	default:
		std::cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you.\n";
		chosen_pokemon = "Pikachu";
		std::cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
	}

	std::cout << "Professor Oak: " << chosen_pokemon << " and you, "
		<< player_name << ", are going to be the best of friends!\n";
	std::cout << "Professor Oak: Your journey begins now! Get ready to explore "
		"the vast world of Pokemon!\n";

	std::cout << "Welcome, brave adventurer!" << std::endl;

	std::cout << "You find yourself standing in front of a massive, ancient castle." << std::endl;

	std::cout << "The walls are cracked with age," << std::endl;

	std::cout << "and the doors creak as they slowly open in front of you." << std::endl;

	std::cout <<  "Inside, there are many rooms, each more mysterious than the last." << std::endl;

	std::cout << "Some may hold treasures beyond imagination," << std::endl;

	std::cout << "while others may hide dangers lurking in the shadows." << std::endl;

	std::cout << 
		"Your goal is simple, yet perilous—choose a room! \n" <<
		"Once inside, who knows what you may find ? \n" <<
		"Will it be riches, knowledge, or something… more sinister ? \n" <<
		"It’s all up to the room you pick." << std::endl;

	std::cout << "Enter the castle, choose your room by entering a number (1, 2, 3 or 4)." << std::endl;
	switch (choice)
	{
	case 1:
		std::cout << "A room full of gold coins! You can retire now, you lucky soul!" << std::endl;
	case 2:
		std::cout << "A library of ancient books! You gain immense knowledge, but beware… some knowledge comes with a price." << std::endl;
	case 3:
		std::cout << "A sleeping dragon! You barely escape with your life. Perhaps next time, choose more wisely..." << std::endl;
	case 4:
		std::cout << "A small cute by monster. Maybe you choice was not that wrong after all..." << std::endl;
	default:
		std::cout << "A secret passage to the dungeon! Beware, danger lies ahead in the dark corridors." << std::endl;

	}

	std::cout << "The fate of your adventure lies in the room you choose." << std::endl;
	std::cout << "Will you find riches or danger?" << std::endl;
	std::cout << "Only time will tell... Choose wisely, adventurer, for once you step inside," << std::endl;
	std::cout << "there’s no turning back." << std::endl;

	return 0;
}