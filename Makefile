output: main.o Game.o Creature.o Vampire.o Barbarian.o Bluemen.o Medusa.o HarryPotter.o
	g++ main.o Game.o Creature.o Vampire.o Barbarian.o Bluemen.o Medusa.o HarryPotter.o -o output
	
main.o: main.cpp
	g++ -c main.cpp
	
Game.o: Game.cpp Game.hpp
	g++ -c Game.cpp
	
Creature.o: Creature.cpp Creature.hpp
	g++ -c Creature.cpp

Vampire.o: Vampire.cpp Vampire.hpp
	g++ -c Vampire.cpp

Barbarian.o: Barbarian.cpp Barbarian.hpp
	g++ -c Barbarian.cpp

Bluemen.o: Bluemen.cpp Bluemen.hpp
	g++ -c Bluemen.cpp
	
Medusa.o: Medusa.cpp Medusa.hpp
	g++ -c Medusa.cpp

HarryPotter.o: HarryPotter.cpp HarryPotter.hpp
	g++ -c HarryPotter.cpp

clean: 
	rm *.o output