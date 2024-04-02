#ifndef POWERPUFF_H
#define POWERPUFF_H

class PowerPuff {
public:
    virtual int getDamage() = 0;
    virtual int getHealth() = 0; 
    virtual void damageIt(int damageValue) = 0;
    virtual void setAlive(bool alive) = 0;
    virtual bool getAlive() = 0;
};

#endif