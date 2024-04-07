#ifndef ESCAPE_H
#define ESCAPE_H

#include "Hero.h"
#include "Snorc.h"
#include "Ninja.h"
#include "List.h"

// added helper function for status
class Escape{
  public:
    Escape();
    void runEscape();
    static bool withinBounds(int,int);

  private:
    int numSnorcs;
    List<Participant*> arr;
    Hero* h1;
    Hero* h2;
    void spawnSnorc();
    void spawnNinja();
    void moveParticipants();
    Participant* checkForCollision(Participant*);
    bool isOver();
    void printPit();
    void printOutcome(Hero*);
    string getStatus(Hero*);
};
#endif