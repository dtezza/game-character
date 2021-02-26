#include <iostream>

using namespace std;

class Boot {
    private:
	int defensePoints; 	        
	int heathPoints; 	        
    public:
    Boot();
    Boot(int defense,int health);
    void setDefense(int defense);
    void setHealth(int health);
    int getDefense();
    int getHealth();          
};