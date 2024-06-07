#include "StringData.h"
bool StringData::Add(string toadd)
{
    this->value += toadd;
    return true;
}