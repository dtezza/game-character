#include "helmet.h"

Helmet::Helmet()
{

}

Helmet::Helmet(int defense, int health)
{
    defensePoints = defense;
    healthPoints = health;
}

void Helmet::setDefense(int defense)
{
    defensePoints = defense;
}

void Helmet::setHealth(int health)
{
    healthPoints = health;
}

int Helmet::getDefense()
{
    return defensePoints;
}

int Helmet::getHealth()
{
    return healthPoints;
}