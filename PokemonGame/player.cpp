#include <iostream>

#include "player.h";

Player::Player() {
	m_name = "Trainer";
	m_chosenPokemon = Pokemon();
}

Player::Player(const std::string& p_name, Pokemon p_chosenPokemon) {
	m_name = p_name;
	m_chosenPokemon = p_chosenPokemon;
}

Player::Player(const Player& other) {
	m_name = other.m_name;
	m_chosenPokemon = other.m_chosenPokemon;
}

void Player::chosenPokemon(int choice)
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

std::string Player::getName() const { return m_name; }

void Player::setName(const std::string& p_name) { m_name = p_name; }

Pokemon Player::getChosenPokemon() const { return m_chosenPokemon; }

void Player::setChosenPokemon(Pokemon p_chosenPokemon) { m_chosenPokemon = p_chosenPokemon; }