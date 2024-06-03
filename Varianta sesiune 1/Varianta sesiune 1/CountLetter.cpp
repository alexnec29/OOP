#include "CountLetter.h"

CountLetter::CountLetter(const std::string processorName, std::function<bool(char)> pred)
    : name(processorName), predicate(pred) {}

std::string CountLetter::GetName() const {
    return name;
}

int CountLetter::Compute(const std::string text) const {
    int count = 0;
    for (char ch : text) {
        if (predicate(ch)) {
            count++;
        }
    }
    return count;
}