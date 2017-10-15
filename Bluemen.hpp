#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Creature.hpp"

using namespace std;

class Bluemen : public Creature {
    
public:
    Bluemen();
        
    
    virtual int attack();
    virtual int defend(int);
    
};

#endif /* BLUEMEN_HPP */