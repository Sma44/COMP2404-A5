#ifndef VILLAINBEHAVIOUR_H
#define VILLAINBEHAVIOUR_H
#include "MoveBehaviour.h"

class VillainBehaviour : public MoveBehaviour{
  public:
    virtual void move(int,int,int&,int&);
};

#endif