// test constructori.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void hello(int* k)
{
    k[0] = 2;
}
int main()
{
    int a = 1;
    int b[10];
    hello(b);
    cout << b;
}
