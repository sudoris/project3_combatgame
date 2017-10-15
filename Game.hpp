#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <iostream> 

#include "Creature.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "Bluemen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

using namespace std;

class Game {
    
protected:
    Creature* fighter1;
    Creature* fighter2;
  
public:
    Game();
    
    void gameMenu();
    
    void fight();
    
       
     
 
  
  
    
};

#endif /* GAME_HPP */