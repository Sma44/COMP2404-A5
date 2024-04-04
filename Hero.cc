#include "Hero.h"
#include "EscapeeBehaviour.h"
#include "RescuedBehaviour.h"

Hero::Hero(char ava, int row, int col, std::string name) 
: Participant(ava, row, col, new EscapeeBehaviour()), name(name), health(MAX_HEALTH), rescued(false) {}

void Hero::incurDamage(Participant* p){
  int damage = p->causeDamage();

  if (damage = RESCUE){
    rescued = true;
    p->setBehavior(new RescuedBehaviour());
    return;
  }

  health -= damage;

  if (health <= 0){
    health = 0;
    dead = true;
    avatar = '+';
  }

}