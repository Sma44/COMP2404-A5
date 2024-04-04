#include "Hero.h"

// add move behavior init for participant
Hero::Hero(char ava, int row, int col, std::string name) 
: Participant(ava, row, col), name(name), health(MAX_HEALTH), rescued(false) {}

