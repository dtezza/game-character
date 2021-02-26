#include <iostream>

using namespace std;

class Weapon {
    private:
	int attackPoints; 	                
    public:
    Weapon();
    Weapon(int attackPoints);
    void setAttack(int attackPoints);
    int getAttack();     
};