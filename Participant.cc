#include "Participant.h"

Participant::Participant(char ava, int r, int c, MoveBehaviour* b) 
: avatar(ava), row(r), col(c), dead(false), behaviour(b) {}

Participant::~Participant() { delete behaviour; } 

void Participant::move() { 
  int newRow, newCol;
  behaviour->move(row, col, newRow, newCol);
  row = newRow;
  col = newCol;
}

char Participant::getAvatar() { return avatar; }
int Participant::getRow() { return row; }
int Participant::getCol() { return col; }
bool Participant::isDead() { return dead; }
void Participant::setBehavior(MoveBehaviour* b) { behaviour = b; }