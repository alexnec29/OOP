#include "masina.h"
#include <iostream>
using namespace std;
void Masina::bisnitar()
{
	this->kilometraj = this->kilometraj - 1000;
	return;
}
void Masina::cursa(int distanta)
{
	this->kilometraj = this->kilometraj - distanta;
	this->litri = this->litri - this->consum * distanta;
	return;
}