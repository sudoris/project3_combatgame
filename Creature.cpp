
#include <string>
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "Creature.hpp"

Creature::Creature() {
        
}

int Creature::getStr() {
    return str;
}
    
void Creature::takeDmg(int damage) {
        str-=damage;
}

void Creature::setName(string fighterTurn) {
        name = name + fighterTurn;
}

string Creature::getName() {
        return name;
}
    
int Creature::getArmor() {
        return armor;
}

int Creature::roll(int sides) {
        return rand() % sides + 1;
}