#include "Participant.h"

Participant::Participant(char ava, int r, int c, MoveBehaviour* b) 
: avatar(ava), row(r), col(c), behaviour(b), dead(false) {}

Participant::~Participant() { delete behaviour; } 

void Participant::move() { 
  int newRow, newCol;
  if (!isDead() && !isSafe()){
    behaviour->move(row, col, newRow, newCol);
  }
  else {
    return;
  }
  row = newRow;
  col = newCol;
}

char Participant::getAvatar() { return avatar; }
int Participant::getRow() { return row; }
int Participant::getCol() { return col; }
bool Participant::isDead() { return dead; }

void Participant::setBehavior(MoveBehaviour* b) { 
  delete behaviour;
  behaviour = b; 
}