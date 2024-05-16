#include <iostream>
#include <algorithm>
using namespace std;

float operator"" _Kelvin(unsigned long long x)
{
    return (float)x - 273.15;
}

float operator"" _fahrenheit(unsigned long long x)
{
    return (float)(x - 32.0) / 1.8;
}

int main()
{
    float a = 300_Kelvin;
    float b = 120_fahrenheit;
    cout << a << " " << b;
    return 0;
}