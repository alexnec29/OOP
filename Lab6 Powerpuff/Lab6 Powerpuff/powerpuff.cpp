#include <iostream>
#include "powerpuff.h"
using namespace std;
void PowerPuff::damageIt(int damageValue) {
	this->health -= damageValue;
}
void PowerPuff::setAlive(bool alive)
{
	this->alive = alive;
}
bool PowerPuff::getAlive() {
	return this->alive;
}
