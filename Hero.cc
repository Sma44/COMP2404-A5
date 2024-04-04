#include "Hero.h"
#include "EscapeeBehaviour.h"

Hero::Hero(char ava, int row, int col, std::string name) 
: Participant(ava, row, col, new EscapeeBehaviour()), name(name), health(MAX_HEALTH), rescued(false) {}

