#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "powerpuff.h" // Include PowerPuff class header
#include "mojojojo.h" // Include MojoJojo class header
#include <iostream>

enum Ingredient {
    Sugar,
    Spice,
    EverythingNice
};

class Professor {
private:
    int ingredient[3];
    int powerpuffNumber;
    PowerPuff** powerpuff;
public:
    Professor()
    {
        ingredient[Sugar] = 0;
        ingredient[Spice] = 0;
        ingredient[EverythingNice] = 0;
        powerpuff = new PowerPuff * [100];
        powerpuffNumber = 0;
    }
    void addIngredient(Ingredient ing);
    void createPowerpuff();
    void battle(MojoJojo& mojojojo);
};

#endif