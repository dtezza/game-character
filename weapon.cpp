#include "weapon.h"

Weapon::Weapon()
{

}

Weapon::Weapon(int attackPoints)
{
    this->attackPoints = attackPoints;
}

void Weapon::setAttack(int attackPoints)
{
    this->attackPoints = attackPoints;
}
int Weapon::getAttack()
{
    return attackPoints;
}
