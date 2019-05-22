game: main.o  Balrog.o Creature.o Cyberdemon.o Demon.o Elf.o Human.o
	g++ main.o Balrog.o Creature.o Cyberdemon.o Demon.o Elf.o Human.o

main.o: main.cpp
	g++ -c main.cpp

Balrog.o: Balrog.cpp
	g++ -c Balrog.cpp

Creature.o: Creature.cpp
	g++ -c Creature.cpp

Cyberdemon.o: Cyberdemon.cpp
	g++ -c Cyberdemon.cpp

Demon.o: Demon.cpp
	g++ -c Demon.cpp

Elf.o: Elf.cpp
	g++ -c Elf.cpp

Human.o: Human.cpp
	g++ -c Human.cpp

clean: 
	rm *.o game


