/*
	Profesorul X a decis sa faca mai multe fetite PowerPuff, si evident are nevoie de sugar/spice and everything nace
	Pt ca ii este lene, da o comanda cu Glovo si ii spune curieruui sa i aduca tot zaharul/condimentele/fainutzul din magazin
	Implementati clasa abstracta PowerPuffGirl si clasele care mostenesc interfata : Bubbles, Blossom, Buttercup

	Fiecare dintre fetite are
	Damage, health

	clasa Profesor care primeste o lista de ingrediente care a reusit curierul sa le cumpere
	ex: sugar, spice, spice, everything_nice, sugar

	Ca sa creeze o fetita powerpuff are nevoie de
	1x sugar
	1x spice
	1x everything_nice

	O sa creeze cat de multe fetite poate
	cu o sansa de 33% sa fie ori un ButterCup, ori un Blossom, ori un Bubbles

	clasa MojoJojo
	care are
	damage, health

	Si apoi implementati o metoda globala care simuleaza lupta intre MojoJojo si fetitele powerpuff ale profesorului

	Daunele se efectueaza in ture
	In fiecare tura fetitele dau damage lui MojoJojo
	si MojoJojo alege o fetita aleatoare care sa o dauneze

	Scrieti o metoda care afiseaza castigatorul bataliei
	Si o metoda care sa afiseze cate fetite au supravietuit si cu cata viata


*/

#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

enum Ingredient{
	Sugar,
	Spice,
	EverythingNice
};

class PowerPuff {
protected:
	int damage;
	int health;
	bool alive;
public:
	virtual int getDamage() = 0;
	virtual int getHealth() = 0;
	void damageIt(int damageValue) {
		this->health -= damageValue;
	}
	void setAlive(bool alive)
	{
		this->alive = alive;
	}
	bool getAlive() {
		return alive;
	}
};

class Blossom : public PowerPuff {
public:
	Blossom()
	{
		damage = 150;
		health = 200;
		alive = true;
	}
	int getDamage() {
		return damage;
	}

	int getHealth() {
		return health;
	}
};

class Bubbles : public PowerPuff {
public:
	Bubbles()
	{
		damage = 75;
		health = 300;
		alive = true;
	}
	int getDamage(){
		return damage;
	}

	int getHealth(){
		return health;
	}
};

class Buttercup : public PowerPuff {
public:
	Buttercup(){
		damage = 200;
		health = 100;
		alive = true;
	}
	int getDamage() {
		return damage;
	}

	int getHealth() {
		return health;
	}

};

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
	int getDamage() {
		return damage;
	}

	int getHealth() {
		return health;
	}
	bool getAlive() {
		return alive;
	}
	void setAlive(bool alive)
	{
		this->alive = alive;
	}
	void damageIt(int damageValue) {
		this->health -= damageValue;
	}
};

class Professor {
private:
	int ingredient[3];
	int powerpuffNumber;
	PowerPuff** powerpuff;
public:
	Professor()
	{
		ingredient[Ingredient::Sugar] = 0;
		ingredient[Ingredient::Spice] = 0;
		ingredient[Ingredient::EverythingNice] = 0;
		powerpuff = new PowerPuff* [100];
		powerpuffNumber = 0;
	}
	void addIngredient(Ingredient ing)
	{
		ingredient[ing]++;
	}
	void createPowerpuff()
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
			cout << "Powerpuff girl "<< powerpuffNumber+1<< " created with damage " << powerpuff[powerpuffNumber]->getDamage() << " and health "<< powerpuff[powerpuffNumber]->getHealth() << endl;
			powerpuffNumber++;
		}
		else
		{
			printf("Not enough ingredients\n");
		}
	}
	void battle(MojoJojo& mojojojo) {
		bool alive;
		int round = 0;
		int powerpuffNumberAlive = 0;
		for (int i = 0; i < powerpuffNumber; i++)
		{
			if (powerpuff[i]->getAlive()) powerpuffNumberAlive++;
		}
		cout << endl;
		cout << "Battle between Mojo Jojo and " << powerpuffNumberAlive << " Powerpuff Girls is starting NOW!" << endl<<endl;
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
				cout << "Powerpuff Girl " << random + 1 << " took " << mojojojo.getDamage() << " damage, remaining with " << powerpuff[random]->getHealth() << " health!"<<endl;
				if (powerpuff[random]->getHealth() <= 0) {
					powerpuff[random]->setAlive(false);
					cout << " Powerpuff Girl " << random + 1 << " is DEAD!" << endl;
				}
			}
		}
		if (!mojojojo.getAlive()) {
			cout << "Mojo Jojo is dead!" << endl<<endl<<endl;
		}
		if (!alive)
		{
			cout << "Powerpuff Girls are dead!" << endl<<endl<<endl;
		}
	}
};

int main()
{
	srand(time(0)); 
	Professor professor;
	for (int i = 1; i <= 50; i++)
	{
		professor.addIngredient(Sugar);
		professor.addIngredient(Spice);
		professor.addIngredient(EverythingNice);
		professor.createPowerpuff();
	}
	MojoJojo mojojojo(100000, 100000);
	professor.battle(mojojojo);
	return 0;
}

