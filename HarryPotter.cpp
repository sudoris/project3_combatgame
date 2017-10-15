
#include <string>
#include <iostream> 
#include <cstdlib>
#include <ctime>

#include "HarryPotter.hpp"

using namespace std;

HarryPotter::HarryPotter() : Creature::Creature() {
    attackRolls = 2;
    attackDieSides = 6;
    defenseRolls = 2;
    defenseDieSides = 6;
    armor = 0;
    str = 10;
    name = "Harry Potter";
	hasRevive = true;
}

int HarryPotter::attack() {
    
    int attackTotal = 0; 
    
    
    for (int i = 0; i < attackRolls; i++) {
        attackTotal+=roll(attackDieSides);
    }
    
    
    cout << name << " attacks for " << attackTotal << endl;
    return attackTotal;
    
}

int HarryPotter::defend(int damage) {
    
    int defenseValue = 0;
    
    for (int i = 0; i < defenseRolls; i++) {
        defenseValue+=roll(defenseDieSides);
    }
        
    cout << name << " defends for " << defenseValue << endl;
    
    
        
    if (defenseValue >= damage) {
        return 0;
    }
    else {
        return damage - defenseValue;
    }
}

void HarryPotter::takeDmg(int damage) {
    
    str-=damage;
    
    if (hasRevive && str <= 0) {
		
		cout << endl;
		cout << name << " has been defeated!" << "...or has he???" << endl;
		cout << name << " revives stronger than ever before after receiving mouth-to-mouth CPR from Hermione!" << endl;
        cout << name << "'s strength is now 20!" << endl << endl;
        str = 20;
		hasRevive = false;
    }
}