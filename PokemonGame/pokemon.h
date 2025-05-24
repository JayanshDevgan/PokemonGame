#pragma once

enum class PokemonChoice
{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU
};

enum class PokemonType
{
    BUG,
    FIRE,
    ROCK,
    GRASS,
    WATER,
    EARTH,
    NORMAL,
    POISON,
    ELECTRIC
};

class Pokemon
{
public:
    std::string m_name;
    PokemonType m_type;
    int m_health;

    Pokemon();

    Pokemon(const std::string& p_name, PokemonType p_type, int p_health);

    Pokemon(const Pokemon& other);

    ~Pokemon();

    void attack();
};