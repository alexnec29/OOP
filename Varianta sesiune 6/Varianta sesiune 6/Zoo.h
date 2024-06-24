#pragma once
#include <algorithm>
#include <vector>

#include "Animal.h"
#include "Feline.h"

class Zoo
{
	std::vector<Animal*> animals;
public:
	std::vector<Animal*> GetFishes();
	std::vector<Animal*> GetBirds();
	std::vector<Animal*> GetMammals();
	std::vector<Feline*> GetFelines();
	int GetTotalAnimals();
	Zoo& operator+=(Animal* animal) {
		animals.push_back(animal);
		return *this;
	}
	bool operator()(const std::string& name) const {
		for(auto a: animals)
		{
			if(a->GetName()==name)
			{
				return true;
			}
		}
		return false;
	}
};

