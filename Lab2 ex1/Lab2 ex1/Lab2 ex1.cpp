#include <iostream>
#include "numberlist.h"
using namespace std;
int main()
{
    NumberList listaMea;
    listaMea.Init();
    listaMea.Add(7);
    listaMea.Add(1);
    listaMea.Sort();
    listaMea.Print();
    listaMea.Add(20);
    listaMea.Add(17);
    listaMea.Sort();
    listaMea.Print();
}
