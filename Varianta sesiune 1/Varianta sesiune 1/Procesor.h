#pragma once
#include <iostream>
#include <string.h>
class Procesor {
public:
    virtual std::string GetName() const = 0;
    virtual int Compute(const std::string text) const = 0;
};

