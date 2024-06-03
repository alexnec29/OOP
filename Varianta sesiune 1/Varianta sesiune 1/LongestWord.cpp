#include "LongestWord.h"

LongestWord::LongestWord(const std::string processorName) : name(processorName) {}

std::string LongestWord::GetName() const {
    return name;
}

int LongestWord::Compute(const std::string text) const {
    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i <= text.length(); ++i) {
        if (i == text.length() || text[i]==' ') {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 0;
        }
        else {
            currentLength++;
        }
    }
    return maxLength;
}

