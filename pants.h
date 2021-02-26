#include <iostream>

using namespace std;

class Pants {
    private:
	int defensePoints; 	        
	int healthPoints; 	        
    public:
    Pants();
    Pants(int defense,int health);
    void setDefense(int defense);
    void setHealth(int health);
    int getDefense();
    int getHealth();          
};