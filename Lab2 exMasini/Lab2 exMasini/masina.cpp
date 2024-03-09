#include "masina.h"
#include <iostream>
using namespace std;
void Masina::bisnitar()
{
	if (this->kilometraj >= 1000)
	{
		this->kilometraj = this->kilometraj - 1000;
	}
	else
	{
		return;
	}
}
void Masina::cursa(int distanta)
{
	this->kilometraj = this->kilometraj + distanta;
	if(this->litri - this->consum * distanta / 100>=0) 
		this->litri = this->litri - this->consum * distanta/100;
	return;
}
void Masina::setConsum(int a)
{
	if(a>=0) this->consum = a;
}
void Masina::setFirma(char firmaden[])
{
	strcpy_s(this->firma, firmaden);
}
void Masina::setKilometraj(int a)
{
	if(a>=0) this->kilometraj = a;
}
void Masina::setLitri(int a)
{
	if(a>=0) this->litri = a;
}
void Masina::getFirma()
{
	cout << this->firma<<endl;
}
void Masina::getLitri()
{
	cout << this->litri<<endl;
}
void Masina::getConsum()
{
	cout << this->consum<<endl;
}
void Masina::getKilometraj()
{
	cout << this->kilometraj<<endl;
}