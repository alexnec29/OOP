#include <iostream>
#include "studentcomparison.h"
using namespace std;
int main()
{
    Student ana;
    Student maria;
    Student ioana;

    ana.SetName((char*)"ana");
    maria.SetName((char*)"maria");

    printf("%d",CompareName(ana, maria));

}
