#include "Participant.h"

Participant::Participant(char ava, int r, int c) 
: avatar(ava), row(r), col(c), dead(false) {}

Participant::~Participant() {} // delete behavior pointer??

void Participant::move() {} // TODO

char Participant::getAvatar() { return avatar; }
int Participant::getRow() { return row; }
int Participant::getCol() { return col; }

void Participant::setBehavior() {} // TODO

bool Participant::isDead() { return dead; }