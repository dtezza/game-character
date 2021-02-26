#include "armor.h"

Armor::Armor()
{

}

Armor::Armor(int defense, int health)
{
    defensePoints = defense;
    healthPoints = health;
}

void Armor::setDefense(int defense)
{
    defensePoints = defense;
}

void Armor::setHealth(int health)
{
    healthPoints = health;
}

int Armor::getDefense()
{
    return defensePoints;
}

int Armor::getHealth()
{
    return healthPoints;
}