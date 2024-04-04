#ifndef HERO_H
#define HERO_H

#include "Participant.h"

class Hero : public Participant {
  public:
  Hero(char='H', int=0, int=0,std::string="N/A");
  virtual void incurDamage(Participant*);
  virtual int causeDamage();
  bool isSafe();

  private:
    std::string name;
    int health;
    bool rescued;
};

#endif