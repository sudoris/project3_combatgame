
#include <string>
#include <iostream> 
#include <cstdlib>
#include <ctime>

#include "Bluemen.hpp"

using namespace std;

Bluemen::Bluemen() : Creature::Creature() {
    attackRolls = 2;
    attackDieSides = 10;
    defenseRolls = 3;
    defenseDieSides = 6;
    armor = 3;
    str = 12;
    name = "Blue Men";
}

int Bluemen::attack() {
    
    int attackTotal = 0; 
    
    for (int i = 0; i < attackRolls; i++) {
        attackTotal+=roll(attackDieSides);
    }
    
    cout << name << " attacks for " << attackTotal << endl;
    
    return attackTotal;
  
}

int Bluemen::defend(int damage) {
    
    int defenseValue = 0;
    
    if (str > 8) {
        for (int i = 0; i < defenseRolls; i++) {
            defenseValue+= roll(defenseDieSides);
        }
        
        cout << name << " defends for " << defenseValue << endl;
        
        if (defenseValue >= damage) {
            return 0;
        }
        else {
            return damage - defenseValue;
        }
    }
    else if (str > 4) {
        
        defenseRolls-=1;
        
        for (int i = 0; i < defenseRolls; i++) {
            defenseValue+= roll(defenseDieSides);
        }
        
        cout << name << " defends for " << defenseValue << endl;
        
        if (defenseValue >= damage) {
            return 0;
        }
        else {
            return damage - defenseValue;
        }
    }
    else {
        defenseRolls-=2;
        
        for (int i = 0; i < defenseRolls; i++) {
            defenseValue+= roll(defenseDieSides);
        }
        
        cout << name << " defends for " << defenseValue << endl;
        
        if (defenseValue >= damage) {
            return 0;
        }
        else {
            return damage - defenseValue;
        }
    }
}