
#include <string>
#include <iostream> 
#include <cstdlib>
#include <ctime>

#include "Vampire.hpp"

using namespace std;

Vampire::Vampire() : Creature::Creature() {
    attackRolls = 1;
    attackDieSides = 12;
    defenseRolls = 1;
    defenseDieSides = 6;
    armor = 1;
    str = 18;
    name = "Vampire";
}

int Vampire::attack() {
    
    int attackTotal = 0; 
    
    for (int i = 0; i < attackRolls; i++) {
        attackTotal+=roll(attackDieSides);
    }
    
    cout << name << " attacks for " << attackTotal << endl;
    
    return attackTotal;
    /*
    int dmg = roll(attackRolls, attackDieSides);
    
    cout << "Vampire attacks for " << dmg << " damage!" << endl;
    
    return dmg;*/
}

int Vampire::defend(int damage) {
    
    int charm = rand() % 2;
    int defenseValue = 0;
    
    
    
    if (charm == 0) {
        cout << "But is charmed by " << name << " during the attack and deals no damage!" << endl;
        
        return 0;
    }
    else {
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
}