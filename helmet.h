#include <iostream>

using namespace std;

class Helmet {
    private:
	int defensePoints; 	        
	int healthPoints; 	        
    public:
    Helmet();
    Helmet(int defense,int health);
    void setDefense(int defense);
    void setHealth(int health);
    int getDefense();
    int getHealth();          
};