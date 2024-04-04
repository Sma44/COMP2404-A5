#ifndef SNORC_H
#define SNORC_H

#include "Participant.h"

class Snorc : public Participant{
  public:
    Snorc(int=MAX_ROW, int=MAX_COL, int=2);
    void incurDamage();
    int causeDamage();
    bool isSafe();

  private:
    int strength;
};

#endif