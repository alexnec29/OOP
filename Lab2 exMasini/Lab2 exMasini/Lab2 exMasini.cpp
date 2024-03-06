#include <iostream>
#include "masina.cpp"
/*
*  Creati un sablon pentru o clasa Masina,
*   o sa aibe urmatoarele elemente : firma, nr litri combustibili, consum(litri/km) kilometraj
*       fiecare element sa aibe getter si setter
*   si urmatoarele metode
*       1. bisnitar - da kilometrajul inapoi cu 1000 km
*       2. cursa(distanta) - creste kilometrajul, scade combustibil
*/
int main()
{
    Masina m;
    strcpy_s(m.firma, "Firma mea");
    m.kilometraj = 220000;
    m.consum = 6;
    m.litri = 100;
}