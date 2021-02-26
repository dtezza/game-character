#include "pants.h"

Pants::Pants()
{

}

Pants::Pants(int defense, int health)
{
    defensePoints = defense;
    healthPoints = health;
}

void Pants::setDefense(int defense)
{
    defensePoints = defense;
}

void Pants::setHealth(int health)
{
    healthPoints = health;
}

int Pants::getDefense()
{
    return defensePoints;
}

int Pants::getHealth()
{
    return healthPoints;
}