#pragma once
#include <vector>

#include "angajat.h"

class Manager : public Angajat
{
	std::vector<Angajat*> echipa;
	std::string numeEchipa;
public:
	Manager(std::string numeEchipa, std::string nume, int salariu, int id);
	void Lucreaza();
	bool Angajeaza(Angajat* x);
	bool Concediaza(Angajat* x);
	Angajat GetAngajat(int id);
};

