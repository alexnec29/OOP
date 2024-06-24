#pragma once
#include "Procesator.h"
#include <functional>
#include <iostream>

class Find : public Procesator {
    std::function<bool(int)> predicate;
public:
    Find(std::function<bool(int)> pred) : predicate(pred) {}
    void Run(int* data, int count) override {
        int find = 0;
        for (int i = 0; i < count; ++i) {
            if (predicate(data[i])) {
                find++;
            }
        }
        std::cout << "Find: " << find << " elements" << "\n";
    }
};

