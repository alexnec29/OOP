#ifndef SENTENCE_H
#define SENTENCE_H

#include <vector>
#include <string>
#include <functional>
#include "Procesor.h"

class Sentence {
private:
    std::vector<Procesor*> processors;
    std::string name;

public:
    Sentence(const std::string& name);
    void RunAll() const;
    void ListAll() const;
    void Run(const std::string& processorName) const;
    Sentence& operator+=(Procesor* processor);
};

#endif // SENTENCE_H