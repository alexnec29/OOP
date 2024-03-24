#include <iostream>
#include "sort.h"
using namespace std;
int main()
{
    Sort sir1(10, 2, 50);
    sir1.Print();
    cout << endl;
    sir1.QuickSort(true);
    sir1.Print();
}