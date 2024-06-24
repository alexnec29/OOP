#pragma once
#include <string>

class Angajat
{
protected:
	int salariu;
	std::string nume;
	int id;
public:
	Angajat(std::string nume, int salariu, int id);
	std::string GetNume();
	int GetSalariu();
	bool SetSalariu(int salariu);
	void Lucreaza();
};

