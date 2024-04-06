#include "Escape.h"

Escape::Escape(){
  srand( (unsigned)time( NULL ) );
  numSnorcs = 0;

  int col1 = random(10) + LEFT_BOUND;
  int col2 = random(10) + LEFT_BOUND;
  while (col2 == col1){
    col2 = random(10) + LEFT_BOUND;
  }

  h1 = new Hero('T', MAX_ROW-1, col1, "Timmy");
  h2 = new Hero('H', MAX_ROW-1, col2, "Harold");

  arr += h1;
  arr += h2;
}

void Escape::runEscape(){
  bool flag = false;
  int spawn;
  while(!flag){
    usleep(200000);
    spawn = random(SNORC_SPAWN + NO_SNORC);
    if(spawn < SNORC_SPAWN){
      spawnSnorc();
    }

    spawn = random(NINJA_SPAWN + NO_NINJA);
    if(spawn < NINJA_SPAWN){
      spawnNinja();
    }

    moveParticipants();
    flag = isOver();

    system("clear");
    printPit();
  }
  printOutcome();

}

bool Escape::isOver(){
  return ((h1->isDead() || h1->isSafe()) && (h2->isDead() || h2->isSafe()));
}

bool Escape::withinBounds(int row, int col) {

}

void Escape::spawnSnorc(){
  if (numSnorcs == MAX_SNORCS) { return; }

  int col = random(MAX_COL);
  int row = random(6) + MAX_HEIGHT;
  int str = random(3) + MIN_STRENGTH;

  arr+=(new Snorc(row, col, str));
  numSnorcs++;

}

void Escape::spawnNinja(){
  int col = random(MAX_COL);
  int row = 0;
  arr+=(new Ninja(row,col));
}

Participant* Escape::checkForCollision(Participant* p){

}

void Escape::moveParticipants(){

}

void Escape::printPit(){
  char pitTemplate[MAX_ROW][MAX_COL+1]={
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         ",
      "                         "
  };


}

void Escape::printOutcome(){
   if (h1->isDead() && h2->isDead()){
    cout << "Both Heroes have died." << endl;
  }
  else if(h1->isDead() && h2->isSafe()){
    cout << "Only " << h2->getName() << " survived." << endl;
  }
  else if(h1->isSafe() && h2->isDead()){
    cout << "Only " << h1->getName() << " survived." << endl;
  }
  else{
    cout << "Both Heroes survived." << endl;
  }
  cout << setw(7) << left << h1->getName() << ": " << h1->getHealth() << endl;
  cout << setw(7) << left << h2->getName() << ": " << h2->getHealth() << endl;
}