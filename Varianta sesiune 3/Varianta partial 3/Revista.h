#pragma once
#include <string>

#include "Carte.h"

// Clasa derivatã Revista
class Revista : public Carte {
private:
	std::string titlu;
    int nrArticole;
public:
    Revista(std::string titlu, int nrArticole) : titlu(titlu), nrArticole(nrArticole) {}

	std::string GetInfo() const override
	{
		return "Revista " + titlu + " cu " + std::to_string(nrArticole) + " articole";
	}
};