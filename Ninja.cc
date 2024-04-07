#include "Ninja.h"

Ninja::Ninja(int row, int col) 
: Participant('N',row,col,new RescuerBehaviour()), strength(0), poisoned(false) {}

void Ninja::incurDamage(Participant* p){
  if (poisoned){
    return;
  }

  int damage = p->causeDamage();

  if (damage == RESCUE){
    return;
  }

  if (!poisoned && damage == HERO){
    p->setBehavior(new RescuedBehaviour());
    this->setBehavior(new RescuedBehaviour());
    return;
  }

  strength = random(3) + GIANT_DMG;
  this->setBehavior(new VillainBehaviour());
  avatar = 'S';
  poisoned = true;
}

int Ninja::causeDamage() {
  if (!poisoned){
    return RESCUE;
  }
  return strength;
}

bool Ninja::isSafe(){
  if (!poisoned){
    if (row == 0 || row == MAX_ROW-1){
      return true;
    }
  }
  return false;
}