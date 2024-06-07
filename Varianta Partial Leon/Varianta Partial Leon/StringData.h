#pragma once
#include <string>
#include "Entry.h"
#include <iostream>
using namespace std;
class StringData : public Entry
{
    string value;
public:
    bool Add(string toadd);
    bool Substract(int s)
    {
        if (value.size() < s)
        {
            cout << "StringData: len(" + this->value + ") < " << s << '\n';
            return true;
        }
        this->value = this->value.substr(0, this->value.size() - s);
    }
    StringData(string name, string value)
    {
        this->name = name;
        this->value = value;
    }
    void Print()
    {
        cout << this->name + " = " + this->value + ";";
    }
};

