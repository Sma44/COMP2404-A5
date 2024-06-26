#ifndef DEFS_H
#define DEFS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
#include <time.h>
using namespace std;

#define MAX_ROW       20
#define MAX_COL       25
#define MAX_HEALTH    20
#define MAX_ARR      256

#define MAX_SNORCS    12
#define SNORC_SPAWN   90
#define NINJA_SPAWN   33
#define NO_NINJA      67
#define SNORC_SPAWN   90
#define NO_SNORC      10

#define RESCUE        -1
#define HERO           0
#define GIANT_DMG      6
#define LEFT_BOUND     7
#define MAX_HEIGHT    13
#define MIN_STRENGTH   2

#define NOMOVE         0
#define ONEUP          1
#define TWOUP          2
#define ONEDOWN        3
#define TWODOWN        4
#define UP             1

// horizontal movement
#define LEFT           1
#define RIGHT          2

int random(int);

#endif

