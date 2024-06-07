#pragma once
#include <string>
using namespace std;
class Entry
{
protected:
    string name;
public:
    string GetName()
    {
        return this->name;
    }
    virtual void Print() = 0;
    virtual bool Substract(int s) = 0;
    virtual bool Add(string toAdd) = 0;
};

