#ifndef POWERPUFF_H
#define POWERPUFF_H

class PowerPuff {
protected:
    int damage;
    int health;
    bool alive;

public:
    virtual int getDamage() const = 0;
    virtual int getHealth() const = 0; 

    void damageIt(int damageValue) {
        this->health -= damageValue;
    }
    void setAlive(bool alive) {
        this->alive = alive;
    }
    bool getAlive() {
        return this->alive;
    }
};

#endif