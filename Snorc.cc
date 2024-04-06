#include "Snorc.h"

Snorc::Snorc(int row, int col, int str) 
: Participant('s',row,col,new VillainBehaviour()), strength(str) {}

void Snorc::incurDamage(Participant* p) {}
int Snorc::causeDamage() { return strength; }
bool Snorc::isSafe() { return false; }

