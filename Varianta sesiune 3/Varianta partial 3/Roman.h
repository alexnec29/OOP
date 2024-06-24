#pragma once
#include <string>

#include "Carte.h"

// Clasa derivat� Roman
class Roman : public Carte {
private:
	std::string nume;
    std::string autor;
public:
    Roman(std::string nume, std::string autor) : nume(nume), autor(autor) {}

    std::string GetInfo() const override {
        return "Roman " + nume + " de " + autor;
    }
};