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
#include "powerpuff.h"
#include "blossom.h"
#include "bubbles.h"
#include "buttercup.h"
#include "mojojojo.h"
#include "professor.h"
using namespace std;

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
	MojoJojo mojojojo1(100000, 100000);
	professor.battle(mojojojo1);
	professor.verifyPowerpuffAlive();
	MojoJojo mojojojo2(100000, 100000);
	professor.battle(mojojojo2);
	professor.verifyPowerpuffAlive();
	return 0;
}

