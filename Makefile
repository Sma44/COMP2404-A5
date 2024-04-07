OPT = -g -Wall

a5: main.o Escape.o MoveBehaviour.o Participant.o Hero.o Snorc.o Ninja.o random.o 
	g++ $(OPT) -o a5 main.o Escape.o MoveBehaviour.o Participant.o Hero.o Snorc.o Ninja.o random.o 

main.o: main.cc defs.h
	g++ $(OPT) -c main.cc

Participant.o: Participant.cc Participant.h
	g++ $(OPT) -c Participant.cc

Hero.o: Hero.cc Hero.h
	g++ $(OPT) -c Hero.cc

Snorc.o: Snorc.cc Snorc.h
	g++ $(OPT) -c Snorc.cc

Ninja.o: Ninja.cc Ninja.h
	g++ $(OPT) -c Ninja.cc

MoveBehaviour.o: MoveBehaviour.cc MoveBehaviour.h
	g++ $(OPT) -c MoveBehaviour.cc

Escape.o: Escape.cc Escape.h
	g++ $(OPT) -c Escape.cc

random.o: random.cc 
	g++ $(OPT) -c random.cc

clean: 
	rm -f *.o a5