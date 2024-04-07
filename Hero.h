#ifndef HERO_H
#define HERO_H

#include "Participant.h"  

class Hero : public Participant {
  public:
  Hero(char=' ', int=MAX_ROW, int=MAX_COL, std::string="N/A");
  virtual void incurDamage(Participant*);
  virtual int causeDamage();
  bool isSafe();
  std::string getName();
  int getHealth();
  bool isRescued();

  private:
    std::string name;
    int health;
    bool rescued;
};

#endif