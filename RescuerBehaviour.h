#ifndef RESCUERBEHAVIOUR_H
#define RESCUERBEHAVIOUR_H

#include "MoveBehaviour.h"

class RescuerBehaviour : public MoveBehaviour{
  public:
    virtual void move(int,int,int&,int&);
};

#endif