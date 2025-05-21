#include <iostream>


#include "pokemon.h"

Pokemon::Pokemon() {
	m_name = "Unknown";
	m_type = PokemonType::NORMAL;
	m_health = 50;
}

Pokemon::Pokemon(const std::string& p_name, PokemonType p_type, int p_health) {
	m_name = p_name;
	m_type = p_type;
	m_health = p_health;
}

Pokemon::Pokemon(const Pokemon& other) {
	m_name = other.m_name;
	m_type = other.m_type;
	m_health = other.m_health;
}

Pokemon::~Pokemon() {}

void Pokemon::attack() { std::cout << m_name << " attacks with a powerful move!" << std::endl; }