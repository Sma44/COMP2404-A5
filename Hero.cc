#include "Hero.h"

Hero::Hero(char ava, int row, int col, std::string name) 
: Participant(ava, row, col, new EscapeeBehaviour()), name(name), health(MAX_HEALTH), rescued(false) {}

void Hero::incurDamage(Participant* p){
  int damage = p->causeDamage();

  if (damage == RESCUE){
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

int Hero::causeDamage() { return 0; }

bool Hero::isSafe() { 
if (row == 0){
  avatar = ' ';
}  
return (row == 0); 
}

std::string Hero::getName() { return name; }
int Hero::getHealth() { return health; }
bool Hero::isRescued() { return rescued; }