#include "ComputeVowals.h"

ComputeVowals::ComputeVowals(const std::string text) : name(text) {}

std::string ComputeVowals::GetName() const {
    return name;
}

int ComputeVowals::Compute(const std::string text) const {
    int count = 0;
    for (char ch : text) {
        if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U') {
            count++;
        }
    }
    return count;
}

