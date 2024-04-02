#ifndef BUBBLES_H
#define BUBBLES_H

#include "powerpuff.h"

class Bubbles : public PowerPuff {
private:
    int damage;
    int health;
    bool alive;
public:
    Bubbles();
    int getDamage();
    int getHealth();
    void damageIt(int damageValue);
    void setAlive(bool alive);
    bool getAlive();
};

#endif