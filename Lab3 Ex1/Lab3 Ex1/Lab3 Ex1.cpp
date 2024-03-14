#include <iostream>
#include "Math.h"
using namespace std;
int main()
{
    cout << Math::Add(2, 3) << " " << Math::Add(5,7,2,3,4,5)<<endl;
    cout << Math::Mul(5, 2) << " " << Math::Mul(6, 2, 3);
}