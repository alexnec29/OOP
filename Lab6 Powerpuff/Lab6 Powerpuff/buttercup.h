#ifndef BUTTERCUP_H
#define BUTTERCUP_H

#include "powerpuff.h"
class Buttercup : public PowerPuff {
private:
    int damage;
    int health;
    bool alive;
public:
    Buttercup();
    int getDamage();
    int getHealth();
    void damageIt(int damageValue);
    void setAlive(bool alive);
    bool getAlive();
};

#endif