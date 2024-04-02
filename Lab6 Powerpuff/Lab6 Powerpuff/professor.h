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
    Professor();
    void addIngredient(Ingredient ing);
    void createPowerpuff();
    void battle(MojoJojo& mojojojo);
    void verifyPowerpuffAlive();
};

#endif