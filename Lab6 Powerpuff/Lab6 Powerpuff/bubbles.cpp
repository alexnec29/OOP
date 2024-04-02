#include "bubbles.h"
#include <iostream>

Bubbles::Bubbles(){
    this->damage = 75;
    this->health = 300;
    this->alive = true;
}
int Bubbles::getDamage(){
    return this->damage;
}

int Bubbles::getHealth(){
    return this->health;
}
void Bubbles::damageIt(int damageValue) {
    this->health -= damageValue;
}
void Bubbles::setAlive(bool alive) {
    this->alive = alive;
}
bool Bubbles::getAlive() {
    return this->alive;
}