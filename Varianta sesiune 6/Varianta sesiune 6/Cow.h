#pragma once
#include <string>

#include "Animal.h"

class Cow : public Animal
{
	std::string GetName()
	{
		return "Cow";
	}
	bool IsAFish()
	{
		return false;
	}
	bool IsABird()
	{
		return false;
	}
	bool IsAMammal()
	{
		return true;
	}
};
