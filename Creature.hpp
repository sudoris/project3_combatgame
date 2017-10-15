#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>
#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

class Creature {
    
protected:

    int attackRolls, attackDieSides;
    int defenseRolls, defenseDieSides;
    int armor;
    // hitpoints aka strength
    int str; 
    
    string name; 
    
    // simulate dice roll
    int roll(int sides);
    
  
public:
    Creature();
    virtual int attack() = 0;
    virtual int defend(int) = 0;
    
    int getStr();
    
    virtual void takeDmg(int damage);
    
    void setName(string);
    string getName();
    
    int getArmor();
    
};

#endif /* CREATURE_HPP */



