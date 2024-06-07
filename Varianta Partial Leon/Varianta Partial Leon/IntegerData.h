#pragma once
#include <string>
#include <iostream>
#include "Entry.h"
using namespace std;
class IntegerData : public Entry
{
    int value;
public:
    bool Add(string toadd)
    {
        this->value += stoi(toadd);
        return 0;
    }
    bool Substract(int s)
    {
        if (value < s)
        {
            cout << "Nu pot sa-i dau punctaj negativ boss";
            return false;
        }
        this->value -= s;
        return true;
    }
    IntegerData(string name, string value)
    {
        this->name = name;
        this->value = stoi(value);
    }
    void Print()
    {
        cout << this->name + " = " << this->value << ";";
    }
};

