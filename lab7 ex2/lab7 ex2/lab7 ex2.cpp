#include <iostream>

template <class T>
class test
{
    T hello;//orice tip, intreg sau char, pus intre <> la declararea unui obiect
    void print()
    {
        printf("%d", hello);
    }
};

int main()
{
    test<char*> k;//inlocuieste clasa T cu int
}