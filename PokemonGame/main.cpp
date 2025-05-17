#include <iostream>

int main()
{
	std::string player_name;
	std::cout << "Player Name: ";
	std::cin >> player_name;

	int choice;
	std::cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
	std::cout << "You can choose one of the following Pokémon:\n";
	std::cout << "1: Bulbasaur!\n2: Charmander!\n3: Squirtle!";
	std::cout << "\nChoose Your Pokemon: " << std::endl;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		std::cout << "You chose Bulbasaur!A wise choice.\n";
	case 2:
		std::cout << "You chose Charmander! A fiery choice.\n";
	case 3:
		std::cout << "You chose Squirtle! A cool choice.\n";
	default:
		std::cout << "Invalid Choice\n";
	}
	return 0;
}