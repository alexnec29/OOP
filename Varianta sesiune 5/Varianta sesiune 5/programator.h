#pragma once
#include "angajat.h"
#include <string>
class Programator : public Angajat
{
	std::string cod;
public:
	Programator(std::string nume, int salariu, int id);
	void Lucreaza();
	void Add(std::string cod);
	std::string GetCode();
};

