#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Creature.hpp"

using namespace std;

class Medusa : public Creature {
    
public:
    Medusa();
        
    virtual int attack();
    virtual int defend(int);
    
};

#endif /* MEDUSA_HPP */