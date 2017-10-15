#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Creature.hpp"

using namespace std;

class Vampire : public Creature {
    
public:
    Vampire();
        
    
    virtual int attack();
    virtual int defend(int);
    
};

#endif /* VAMPIRE_HPP */
