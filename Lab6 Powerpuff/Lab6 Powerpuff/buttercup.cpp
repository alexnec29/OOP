#include "buttercup.h"
#include <iostream>
Buttercup::Buttercup()
{
    this->damage = 200;
    this->health = 150;
    this->alive = true;
}
int Buttercup::getDamage(){
    return this->damage;
}

int Buttercup::getHealth(){
    return this->health;
}
void Buttercup::damageIt(int damageValue) {
    this->health -= damageValue;
}
void Buttercup::setAlive(bool alive) {
    this->alive = alive;
}
bool Buttercup::getAlive() {
    return this->alive;
}