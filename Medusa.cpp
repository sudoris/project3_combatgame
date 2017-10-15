
#include <string>
#include <iostream> 
#include <cstdlib>
#include <ctime>

#include "Medusa.hpp"

using namespace std;

Medusa::Medusa() : Creature::Creature() {
    attackRolls = 2;
    attackDieSides = 6;
    defenseRolls = 1;
    defenseDieSides = 6;
    armor = 3;
    str = 8;
    name = "Medusa";
}

int Medusa::attack() {
    
    int attackTotal = 0; 
    
    
    for (int i = 0; i < attackRolls; i++) {
        attackTotal+=roll(attackDieSides);
    }
    
    if (attackTotal == 12) {
        cout << name << " uses Glare on her opponent to turn them into stone!" << endl;
        return 999;
    }
    else {
        cout << name << " attacks for " << attackTotal << endl;
        return attackTotal;
    }
}

int Medusa::defend(int damage) {
    
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