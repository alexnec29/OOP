#include "mojojojo.h"
#include <iostream>
using namespace std;

int MojoJojo::getDamage() {
	return damage;
}
int MojoJojo::getHealth() {
	return health;
}
bool MojoJojo::getAlive() {
	return alive;
}
void MojoJojo::setAlive(bool alive)
{
	this->alive = alive;
}
void MojoJojo::damageIt(int damageValue) {
	this->health -= damageValue;
}