#pragma once
#include <vector>
#include "Carte.h"

// Clasa Biblioteca
class Biblioteca {
private:
	std::vector<Carte*> carti;
    static int count;
public:
    Biblioteca() {}
    ~Biblioteca() {
        for (Carte* carte : carti) {
            delete carte;
        }
    }
    Biblioteca& operator+=(Carte* c) {
        carti.push_back(c);
        count++;
        return *this;
    }

    std::vector<Carte*>::iterator begin() {
        return carti.begin();
    }

    std::vector<Carte*>::iterator end() {
        return carti.end();
    }
    operator int() const {
        return count;
    }
    void PrintFilter(bool (*fn)(Carte*)) const {
        for (Carte* carte : carti) {
            if (fn(carte)) {
	            std::cout << carte->GetInfo() << std::endl;
            }
        }
    }
};
int Biblioteca::count = 0;