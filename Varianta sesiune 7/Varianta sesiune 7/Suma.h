#pragma once
#include "Procesator.h"
#include <iostream>
class Suma : public Procesator
{
public:
	void Run(int* data, int count) override
	{
		int suma = 0;
		for (int i = 0; i < count; ++i) {
			suma = suma + data[i];
		}
		std::cout << "Suma: " << suma<<"\n";
	}
	
};

