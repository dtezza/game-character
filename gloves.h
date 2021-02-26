#include <iostream>

using namespace std;

class Gloves {
    private:
	int defensePoints; 	        
	int healthPoints; 	        
    public:
    Gloves();
    Gloves(int defense,int health);
    void setDefense(int defense);
    void setHealth(int health);
    int getDefense();
    int getHealth();          
};