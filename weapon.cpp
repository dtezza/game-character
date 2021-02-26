#include "weapon.h"

Weapon::Weapon()
{

}

Weapon::Weapon(int attackPoints)
{
    this->attackPoints = attackPoints;
}

//Mutator/set method 
void Weapon::setAttack(int attack)
{
    attackPoints = attack;
}

//Accessor/get method
int Weapon::getAttack()
{
    return attackPoints;
}