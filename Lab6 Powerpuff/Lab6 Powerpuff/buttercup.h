#ifndef BUTTERCUP_H
#define BUTTERCUP_H

#include "powerpuff.h"
class Buttercup : public PowerPuff {
public:
    Buttercup()
    {
        this->damage = 200;
        this->health = 150;
    }
    int getDamage() const; // Declare as const member function
    int getHealth() const; // Declare as const member function
};

#endif