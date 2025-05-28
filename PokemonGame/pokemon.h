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

//class WildPokemon
//{
//public:
//    std::string m_name;
//    PokemonType m_type;
//    int m_health;
//
//    WildPokemon();
//
//    WildPokemon(const std::string& p_name, PokemonType p_type, int p_health);
//
//    WildPokemon(const WildPokemon& other);
//
//    ~WildPokemon();
//
//    void attack();
//};

class Pokemon
{
public:
    std::string m_name;
    PokemonType m_type;
    int m_health;
    int m_maxHealth;
    int m_attackPower;

    Pokemon();

    Pokemon(const std::string& p_name, PokemonType p_type, int p_health, int p_maxHealth, int p_attackPower);

    ~Pokemon();

    void attack(Pokemon& target);

    void TakeDamage(int damage);
    bool isFainted() const;
    void heal();
};