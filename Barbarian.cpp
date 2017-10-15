
#include <string>
#include <iostream> 
#include <cstdlib>
#include <ctime>

#include "Barbarian.hpp"

using namespace std;

Barbarian::Barbarian() : Creature::Creature() {
    attackRolls = 2;
    attackDieSides = 6;
    defenseRolls = 2;
    defenseDieSides = 6;
    armor = 0;
    str = 12;
    name = "Barbarian";
}

int Barbarian::attack() {
    
    int attackTotal = 0; 
    
    for (int i = 0; i < attackRolls; i++) {
        attackTotal+=roll(attackDieSides);
    }
    
    cout << name << " attacks for " << attackTotal << endl;
    
    return attackTotal;
    
}

int Barbarian::defend(int damage) {
    
    int defenseValue = 0;
    
    for (int i = 0; i < defenseRolls; i++) {
        defenseValue = defenseValue + roll(defenseDieSides);
    }
        
    cout << name << " defends for " << defenseValue << endl;
        
    if (defenseValue >= damage) {
        return 0;
    }
    else {
        return damage - defenseValue;
    }
}
