#include "manager.h"
Manager::Manager(std::string numeEchipa, std::string nume, int salariu, int id) : Angajat(nume,salariu,id)
{
	this->numeEchipa = numeEchipa;
}
void Manager::Lucreaza()
{
	
}
bool Manager::Angajeaza(Angajat* x)
{
	return true;
}
bool Manager::Concediaza(Angajat* x)
{
	return true;
}
Angajat Manager::GetAngajat(int id)
{
	return *this;
}