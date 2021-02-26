#include <iostream>
#include "boot.h"
#include "armor.h"
#include "helmet.h"
#include "pants.h"
#include "gloves.h"
#include "weapon.h"

using namespace std;

class GameCharacter {
    private:
    int baseHealth;
    int baseDefense;
    int baseAttack;
	Boot boot;
    Armor armor;
    Gloves gloves;
    Pants pants;
    Helmet helmet;
    Weapon weapon;        
    public:
    void setHealth(int health);
    void setDefense(int defense);
    void setAttack(int attack);
    void setBoot(int defense, int health);
    void setPants(int defense, int health);
    void setArmor(int defense, int health);
    void setGloves(int defense, int health);
    void setHelmet(int defense, int health);
    void setWeapon(int attack);
    int getTotalHealth();
    int getTotalDefense();  
    int getTotalAttack();      
    int getBaseHealth();
    int getBaseDefense();  
    int getBaseAttack();   
};