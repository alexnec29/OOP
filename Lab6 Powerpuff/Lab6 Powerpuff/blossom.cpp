#include "blossom.h"

Blossom::Blossom() {
	this->damage = 150; // Specific damage for Blossom
	this->health = 200; // Specific health for Blossom
}

int Blossom::getDamage() const {
	return this->damage;
}

int Blossom::getHealth() const {
	return this->health;
}