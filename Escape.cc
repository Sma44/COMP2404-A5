#include "Escape.h"

Escape::Escape(){

  const char pitTemplate[MAX_ROW][MAX_COL+1]={
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

  srand( (unsigned)time( NULL ) );
  numSnorcs = 0;

  int col1 = random(10) + LEFT_BOUND;
  int col2 = random(10) + LEFT_BOUND;
  while (col2 == col1){
    col2 = random(10) + LEFT_BOUND;
  }

  h1 = new Hero('T', MAX_ROW-2, col1, "Timmy");
  h2 = new Hero('H', MAX_ROW-2, col2, "Harold");

  arr += h1;
  arr += h2;
}