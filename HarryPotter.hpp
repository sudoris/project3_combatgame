#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Creature.hpp"

using namespace std;

class HarryPotter : public Creature {
    
private:
    bool hasRevive;
    
public:
    HarryPotter();
    
    virtual void takeDmg(int damage);    
    virtual int attack();
    virtual int defend(int);
    
};

#endif /* HARRYPOTTER_HPP */