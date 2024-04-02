#ifndef MOJOJOJO_H
#define MOJOJOJO_H

#include <iostream>
using namespace std;
class MojoJojo {
	int health;
	int damage;
	bool alive;
public:
	MojoJojo(int damage, int health)
	{
		this->damage = damage;
		this->health = health;
		this->alive = true;
		cout << "Boss created with damage " << this->damage << " and health " << this->health;
	}
	int getDamage();
	int getHealth();
	bool getAlive();
	void setAlive(bool alive);
	void damageIt(int damageValue);
};

#endif