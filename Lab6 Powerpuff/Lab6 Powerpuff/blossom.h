#ifndef BLOSSOM_H
#define BLOSSOM_H

#include "powerpuff.h"

class Blossom : public PowerPuff {
private:
    int damage;
    int health;
    bool alive;
public:
    Blossom();
    int getDamage();
    int getHealth();
    void damageIt(int damageValue);
    void setAlive(bool alive);
    bool getAlive();
};

#endif