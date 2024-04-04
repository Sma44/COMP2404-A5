#ifndef MOVEBEHAVIOUR_H
#define MOVEBEHAVIOUR_H

#include "defs.h"

class MoveBehaviour{
  public:
    virtual void move(int,int,int&,int&) =0;
};

#endif