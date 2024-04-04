#ifndef ESCAPEEBEHAVIOUR_H
#define ESCAPEEBEHAVIOUR_H

#include "MoveBehaviour.h"

class EscapeeBehaviour : public MoveBehaviour {
  public:
    virtual void move(int,int,int&,int&);
};

#endif