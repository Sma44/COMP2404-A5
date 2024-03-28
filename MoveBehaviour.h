#ifndef MOVEBEHAVIOUR_H
#define MOVEBEHAVIOUR_H

class MoveBehaviour{
  public:
    MoveBehaviour();
    virtual void move(int,int,int&,int&) =0;
};

#endif