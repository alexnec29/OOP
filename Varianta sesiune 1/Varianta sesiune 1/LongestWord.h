#pragma once
#include <iostream>
#include <string.h>
#include "Procesor.h"
class LongestWord : public Procesor
{
private:
    std::string name;

public:
    LongestWord(const std::string text);
    std::string GetName() const override;
    int Compute(const std::string text) const override;
};

