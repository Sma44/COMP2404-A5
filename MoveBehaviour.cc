#include "MoveBehaviour.h"

// TODO: might need to do validation with each function
void EscapeeBehaviour::move(int oldRow, int oldCol, int& newRow, int& newCol){
  int vertical = random(5);
  int horizontal = random(3);
  int verticalOffset = 0;
  int horizontalOffset = 0;

  switch(vertical){
    case ONEUP:
      verticalOffset = -1;
      break;
    case TWOUP:
      verticalOffset = -2;
      break;
    case ONEDOWN:
      verticalOffset = 1;
      break;
    case TWODOWN:
      verticalOffset = 2;
      break;
    case NOMOVE:
      break;
  }

  switch(horizontal){
    case LEFT:
      horizontalOffset = -1;
      break;
    case RIGHT:
      horizontalOffset = 1;
      break;
    case NOMOVE:
      break;
  }

  newRow = oldRow + horizontalOffset;
  newCol = oldCol + verticalOffset;
}

void VillainBehaviour::move(int oldRow, int oldCol, int& newRow, int& newCol){
  int vertical = random(2);
  int horizontal = random(3);
  int horizontalOffset = 0;

  switch(horizontal){
    case LEFT:
      horizontalOffset = -1;
      break;
    case RIGHT:
      horizontalOffset = 1;
    case NOMOVE:
      break;
  }

  newRow = ((vertical == UP) ? oldRow - 1 : oldRow + 1);
  newCol = oldCol + horizontalOffset;
}

void RescuerBehaviour::move(int oldRow, int oldCol, int& newRow, int& newCol){
  newRow = oldRow +1;
}

void RescuedBehaviour::move(int oldRow, int oldCol, int& newRow, int& newCol){
  newRow = oldRow -1;
}