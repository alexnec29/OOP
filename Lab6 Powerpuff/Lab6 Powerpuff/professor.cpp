#include "professor.h"
#include "blossom.h"
#include "bubbles.h"
#include "buttercup.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Professor::addIngredient(Ingredient ing)
{
	ingredient[ing]++;
}
void Professor::createPowerpuff()
{
	if (ingredient[0] > 0 && ingredient[1] > 0 && ingredient[2] > 0)
	{
		int random = rand() % 3;
		if (random == 0) powerpuff[powerpuffNumber] = new Blossom();
		else if (random == 1) powerpuff[powerpuffNumber] = new Bubbles();
		else if (random == 2) powerpuff[powerpuffNumber] = new Buttercup();
		ingredient[0]--;
		ingredient[1]--;
		ingredient[2]--;
		cout << "Powerpuff girl " << powerpuffNumber + 1 << " created with damage " << powerpuff[powerpuffNumber]->getDamage() << " and health " << powerpuff[powerpuffNumber]->getHealth() << endl;
		powerpuffNumber++;
	}
	else
	{
		printf("Not enough ingredients\n");
	}
}
void Professor::battle(MojoJojo& mojojojo) {
	bool alive;
	int round = 0;
	int powerpuffNumberAlive = 0;
	for (int i = 0; i < powerpuffNumber; i++)
	{
		if (powerpuff[i]->getAlive()) powerpuffNumberAlive++;
	}
	cout << endl;
	cout << "Battle between Mojo Jojo and " << powerpuffNumberAlive << " Powerpuff Girls is starting NOW!" << endl << endl;
	while (mojojojo.getAlive()) {
		round++;
		cout << endl << "Round " << round << ", FIGHT!!!" << endl << endl;
		alive = 0;
		for (int i = 0; i < powerpuffNumber; i++) {
			if (powerpuff[i]->getAlive())
			{
				mojojojo.damageIt(powerpuff[i]->getDamage());
				alive = 1;
				cout << "Mojo Jojo took " << powerpuff[i]->getDamage() << " damage, remaining with " << mojojojo.getHealth() << " health" << endl;
			}
			if (mojojojo.getHealth() <= 0)
			{
				mojojojo.setAlive(false);
				break;
			}
		}
		if (!mojojojo.getAlive()) {
			break; // Exit the while loop if Mojo Jojo is defeated
		}
		if (!alive)
		{
			break; // Exit the while loop if no PowerPuff Girl is alive!
		}
		int random = rand() % powerpuffNumber;
		while (!powerpuff[random]->getAlive())
		{
			random = rand() % powerpuffNumber;
		}
		if (powerpuff[random]->getAlive()) {
			powerpuff[random]->damageIt(mojojojo.getDamage());
			cout << "Powerpuff Girl " << random + 1 << " took " << mojojojo.getDamage() << " damage, remaining with " << powerpuff[random]->getHealth() << " health!" << endl;
			if (powerpuff[random]->getHealth() <= 0) {
				powerpuff[random]->setAlive(false);
				cout << " Powerpuff Girl " << random + 1 << " is DEAD!" << endl;
			}
		}
	}
	if (!mojojojo.getAlive()) {
		cout << "Mojo Jojo is dead!" << endl << endl << endl;
	}
	if (!alive)
	{
		cout << "Powerpuff Girls are dead!" << endl << endl << endl;
	}
}
