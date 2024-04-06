#ifndef NINJA_H
#define NINJA_H

#include "Participant.h"

class Ninja: public Participant{
  public:
    Ninja(int=0, int=0);
    void incurDamage(Participant*);
    int causeDamage();
    bool isSafe();

  private:
    int strength;
    bool poisoned;

};
#endif