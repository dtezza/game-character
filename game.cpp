#include <iostream>
#include "gameCharacter.h"

using namespace std;

int main()
{
    GameCharacter knight;

    knight.setHealth(1000);
    knight.setAttack(2500);
    knight.setDefense(1500);

    knight.setArmor(250,150);
    knight.setBoot(140,100);
    knight.setGloves(100,70);
    knight.setHelmet(120,80);
    knight.setPants(160,120);

    knight.setWeapon(860);

    cout <<endl;
    cout << "Knights base attack: " << knight.getBaseAttack() << "\tTotal attack: " << knight.getTotalAttack()<< endl;
    cout << "Knights base defense: " << knight.getBaseDefense() << "\tTotal defense: " << knight.getTotalDefense()<< endl;
    cout << "Knights base health: " << knight.getBaseHealth() << "\tTotal health: " << knight.getTotalHealth()<< endl;
    cout << endl;

    return 0;
}
