#include "blossom.h"

Blossom::Blossom() {
	this->damage = 150; // Specific damage for Blossom
	this->health = 200; // Specific health for Blossom
	this->alive = true;
}

int Blossom::getDamage(){
	return this->damage;
}
int Blossom::getHealth(){
	return this->health;
}
void Blossom::damageIt(int damageValue) {
    this->health -= damageValue;
}
void Blossom::setAlive(bool alive) {
    this->alive = alive;
}
bool Blossom::getAlive() {
    return this->alive;
}