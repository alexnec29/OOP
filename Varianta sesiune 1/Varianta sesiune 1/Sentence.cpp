#include "Sentence.h"
#include <iostream>

Sentence::Sentence(const std::string& name) : name(name) {}

void Sentence::RunAll() const {
    for (const auto& processor : processors) {
        std::cout << processor->GetName() << ": " << processor->Compute(name) << std::endl;
    }
}

void Sentence::ListAll() const {
    for (const auto& processor : processors) {
        std::cout << processor->GetName() << std::endl;
    }
}

void Sentence::Run(const std::string& processorName) const {
    for (const auto& processor : processors) {
        if (processor->GetName() == processorName) {
            std::cout << processor->GetName() << ": " << processor->Compute(name) << std::endl;
            return;
        }
    }
    std::cout << "Processor not found" << std::endl;
}

Sentence& Sentence::operator+=(Procesor* processor) {
    processors.push_back(processor);
    return *this;
}