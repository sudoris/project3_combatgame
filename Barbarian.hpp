#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Creature.hpp"

using namespace std;

class Barbarian : public Creature {
    
public:
    Barbarian();
        
    
    virtual int attack();
    virtual int defend(int);
    
};

#endif /* BARBARIAN_HPP */