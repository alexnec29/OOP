#include <iostream>
#include "masina.h"
/*
*  Creati un sablon pentru o clasa Masina,
*   o sa aibe urmatoarele elemente : firma, nr litri combustibili, consum(litri/km) kilometraj
*       fiecare element sa aibe getter si setter
*   si urmatoarele metode
*       1. bisnitar - da kilometrajul inapoi cu 1000 km
*       2. cursa(distanta) - creste kilometrajul, scade combustibil
*/
using namespace std;
int main()
{
    char firmaden[50] = "BisniSRL";
    Masina m;
    m.setKilometraj(220000);
    m.setConsum(6);
    m.setFirma(firmaden);
    m.setLitri(100);
    m.bisnitar();
    m.cursa(1000);
    m.getKilometraj();
    m.getConsum();
    m.getFirma();
    m.getLitri();
}