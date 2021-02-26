#include "gloves.h"

Gloves::Gloves()
{

}

Gloves::Gloves(int defense, int health)
{
    defensePoints = defense;
    healthPoints = health;
}

void Gloves::setDefense(int defense)
{
    defensePoints = defense;
}

void Gloves::setHealth(int health)
{
    healthPoints = health;
}

int Gloves::getDefense()
{
    return defensePoints;
}

int Gloves::getHealth()
{
    return healthPoints;
}