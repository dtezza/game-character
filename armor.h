#include <iostream>

using namespace std;

class Armor {
    private:
	int defensePoints; 	        
	int healthPoints; 	        
    public:
    Armor();
    Armor(int defense,int health);
    void setDefense(int defense);
    void setHealth(int health);
    int getDefense();
    int getHealth();          
};