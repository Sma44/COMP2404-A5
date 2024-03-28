#ifndef PARTICIPANT_H
#define PARTICIPANT_H



class Participant{
  public:
    Participant(char=' ', int=0, int=0); // include behavior in constructor
    virtual ~Participant();
    virtual void incurDamage(Participant*)=0;
    virtual int causeDamage()=0;
    virtual bool isSafe()=0;
    void move();
    char getAvatar();
    int getRow();
    int getCol();
    void setBehavior(); // add behavior arg
    bool isDead();

  protected:
    char avatar;
    bool dead;
    int row;
    int col;
    // add behavior 


};

#endif