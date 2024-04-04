#ifndef RESCUEDBEHAVIOUR_H
#define RESCUEDBEHAVIOUR_H
#include "MoveBehaviour.h"

class RescuedBehaviour : public MoveBehaviour{
  public:
    virtual void move(int,int,int&,int&);
};

#endif