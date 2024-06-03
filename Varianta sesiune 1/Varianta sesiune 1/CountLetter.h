#pragma once
#include <iostream>
#include <string.h>
#include <functional>
#include "Procesor.h"

class CountLetter : public Procesor {
private:
    std::string name;
    std::function<bool(char)> predicate;

public:
    CountLetter(const std::string processorName, std::function<bool(char)> pred);
    std::string GetName() const override;
    int Compute(const std::string text) const override;
};

