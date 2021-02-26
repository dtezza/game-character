#include "boot.h"

Boot::Boot()
{

}

Boot::Boot(int defense, int health)
{
    defensePoints = defense;
    heathPoints = health;
}

void Boot::setDefense(int defense)
{
    defensePoints = defense;
}

void Boot::setHealth(int health)
{
    heathPoints = health;
}

int Boot::getDefense()
{
    return defensePoints;
}

int Boot::getHealth()
{
    return heathPoints;
}