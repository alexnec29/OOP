#ifndef BUBBLES_H
#define BUBBLES_H

#include "powerpuff.h"

class Bubbles : public PowerPuff {
public:
    Bubbles()
    {
        this->damage = 75;
        this->health = 300;
    }
    int getDamage() const; // Declare as const member function
    int getHealth() const; // Declare as const member function
};

#endif