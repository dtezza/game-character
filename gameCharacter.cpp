#include "gameCharacter.h"

void GameCharacter::setHealth(int health)
{
    baseHealth = health;
}

void GameCharacter::setDefense(int defense)
{
    baseDefense = defense;
}

void GameCharacter::setAttack(int attack)
{
    baseAttack = attack;
}

void GameCharacter::setBoot(int defense, int health)
{
    boot.setDefense(defense);
    boot.setHealth(health);
}

void GameCharacter::setHelmet(int defense, int health)
{
    helmet.setDefense(defense);
    helmet.setHealth(health);
}

void GameCharacter::setGloves(int defense, int health)
{
    gloves.setDefense(defense);
    gloves.setHealth(health);
}

void GameCharacter::setArmor(int defense, int health)
{
    armor.setDefense(defense);
    armor.setHealth(health);
}

void GameCharacter::setPants(int defense, int health)
{
    pants.setDefense(defense);
    pants.setHealth(health);
}

void GameCharacter::setWeapon(int attack)
{
    weapon.setAttack(attack);
}

int GameCharacter::getTotalHealth()
{
    return baseHealth + boot.getHealth() + gloves.getHealth() + pants.getHealth() + armor.getHealth() + helmet.getHealth();
}

int GameCharacter::getTotalDefense()
{
    return baseDefense + boot.getDefense() + gloves.getDefense() + pants.getDefense() + armor.getDefense() + helmet.getDefense();
}

int GameCharacter::getTotalAttack()
{
    return baseAttack + weapon.getAttack();
}

int GameCharacter::getBaseHealth()
{
    return baseHealth;
}

int GameCharacter::getBaseDefense()
{
    return baseDefense;
}

int GameCharacter::getBaseAttack()
{
    return baseAttack;
}