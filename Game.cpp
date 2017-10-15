#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


#include "Game.hpp"

using namespace std;

Game::Game() {
    unsigned seed;
    seed = time(0);
    srand(seed);
}

void Game::gameMenu() {
    
    int choice;
    string yn; 
    
    cout << ":: Welcome to the Collosseum ::" << endl << endl;
    
    while (true) {
        
        cout << "Menu of fighters currently available: " << endl
             << "1) Vampire - Vicious and surprisingly resilient! Also misses his reflection." << endl
             << "2) Barbarian - Big sword, big muscles, bare torso, but with a soft spot for carrot cake and homemade brownies." << endl
             << "3) Blue Men - They are small (6” tall) and lightning quick, making them hard to hit, they also always come in 3\'s." << endl
             << "4) Medusa - Most misunderstood character in Greek mythology. Try not to look at her!" << endl
             << "5) Harry Potter - The boy who lived!" << endl << endl;
             
        cout << "Choose two fighters from the menu to do battle! (Enter 0 to exit)" << endl;
        
        // prompt user to choose Creature for fighter1
        cout << "Fighter one: ";
        cin >> choice;
        
        // input validation
        while (cin.fail() || choice < 0 || choice > 5) {
            cin.clear();
			cin.ignore(256, '\n');
            cout << "Invalid input. Please choose a number from the menu or 0 to exit: ";
            cin >> choice;
        }
        
        // create Creature object for fighter1 according to user input
        if (choice == 0) {
            cout << "Leaving the Collosseum." << endl;
            break;
        }
        else if (choice == 1) {
            fighter1 = new Vampire();
        }
        else if (choice == 2) {
            fighter1 = new Barbarian();
        }
        else if (choice == 3) {
            fighter1 = new Bluemen();
        }
        else if (choice == 4) {
            fighter1 = new Medusa();
        }
        else if (choice == 5) {
            fighter1 = new HarryPotter();
        }
        
        // change name of Creature to indicate whether fighter1 or fighter2
        fighter1->setName(" (Fighter 1)");
        
        
        // prompt user to choose Creature to be fighter2
        cout << "Fighter two: ";
        cin >> choice;
        
        // input validation
        while (cin.fail() || choice < 0 || choice > 5) {
            cin.clear();
			cin.ignore(256, '\n');
            cout << "Invalid input. Please choose a number from the menu or 0 to exit: ";
            cin >> choice;
        }
        
        // create Creature object for fighter2 according to user input
        if (choice == 0) {
            cout << "Farewell my friend." << endl;
			
            break;
        }
        else if (choice == 1) {
            fighter2 = new Vampire();
        }
        else if (choice == 2) {
            fighter2 = new Barbarian();
        }
        else if (choice == 3) {
            fighter2 = new Bluemen();
        }
        else if (choice == 4) {
            fighter2 = new Medusa();
        }
        else if (choice == 5) {
            fighter2 = new HarryPotter();
        }
        
        fighter2->setName(" (Fighter 2)");
        
        cout << endl;
        
        // start fight after both fighters have been selected
        fight();
         
        delete fighter1;
        delete fighter2;
        
        // ask if player would like to play again, use y/n
		cout << "Would you like to play again? (y/n)" << endl;
		cin.ignore(256, '\n');
		getline(cin, yn);
        
		for (int i = 0; i < yn.length(); i++) {
			yn[i] = tolower(yn[i]);
		}
		
        while (yn != "y" && yn != "n") {
            cout << "Invalid input. Please enter 'y' to play again or 'n' to exit." << endl;
            getline(cin, yn);
        }	
			
				
		if (yn == "n") {
			cout << "Until next time then." << endl;
			break;
		}
		
		cout << endl;
		
		
		
        
        
    } 
}

void Game::fight() {
    int turn = rand() % 2; 
    int round = 1;
    Creature* winner;
    
    while (fighter1->getStr() > 0 && fighter2->getStr() > 0) {
        
        int damageTaken;
        
        cout << "Round " << round << endl;
        
        if (turn % 2 == 0) {
            
            damageTaken = fighter1->attack();
            damageTaken = fighter2->defend(damageTaken);
            
            if (damageTaken > 0) {
                
                cout << fighter2->getName() << "'s armor absorbs " << fighter2->getArmor() << " damage." << endl;
                
                damageTaken = damageTaken - fighter2->getArmor();
            }
            
			if (damageTaken <= 0) {
                damageTaken = 0;
            }
            
			if (damageTaken > 0) {
                
                fighter2->takeDmg(damageTaken);
            }
            
			cout << "Results:" << endl;
			cout << fighter1->getName() << " dealt " << damageTaken << " damage to " << fighter2->getName() << "." << endl;
			           
            
            
            
        }
        else {
            
            damageTaken = fighter2->attack();
            damageTaken = fighter1->defend(damageTaken);
            
            if (damageTaken > 0) {
                cout << fighter1->getName() << "'s armor absorbs " << fighter1->getArmor() << " damage." << endl;
                
                damageTaken = damageTaken - fighter1->getArmor();
            }
            
			if (damageTaken <= 0) {
                damageTaken = 0;
            }
			
			if (damageTaken > 0) {
                
                fighter1->takeDmg(damageTaken);
            }
            
			cout << "Results:" << endl;
			cout << fighter2->getName() << " dealt " << damageTaken << " damage to " << fighter1->getName() << "." << endl;
            
            
        }
               		
        
            
		cout << fighter1->getStr() << " strength remaining for " << fighter1->getName() << "." << endl;
		cout << fighter2->getStr() << " strength remaining for " << fighter2->getName() << "." << endl;
		
        cout << endl;
        
        turn++;
        round++;
    }
    
    if (fighter1->getStr() > 0) {
        winner = fighter1;
    } else {
        winner = fighter2;
    }
    	
    cout << winner->getName() << " has won the fight!" << endl << endl;
	
       
    
}






