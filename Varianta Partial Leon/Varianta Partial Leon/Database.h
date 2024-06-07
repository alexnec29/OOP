#pragma once
#include <iostream>
#include <vector>
#include "Entry.h"
class Database
{
    vector<Entry*> entries;
public:
    void operator-=(string entry)
    {
        vector<Entry*> tzaran;
        for (auto el : entries)
        {
            if (el->GetName() != entry)
                tzaran.push_back(el);
        }
        this->entries = tzaran;
    }
    Database& operator+=(Entry* newEntry)
    {
        entries.push_back(newEntry);
        return *this;
    }
    void Print()
    {
        for (Entry* el : entries)
        {
            el->Print();
        }
        cout << '\n';
    }
    std::vector<Entry*>::iterator begin()
    {
        return entries.begin();
    }
    std::vector<Entry*>::iterator  end()
    {
        return entries.end();
    }
};

