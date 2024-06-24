#pragma once
#include <string>

#include "Animal.h"

class Eagle : public Animal
{
	std::string GetName()
	{
		return "Eagle";
	}
	bool IsAFish()
	{
		return false;
	}
	bool IsABird()
	{
		return true;
	}
	bool IsAMammal()
	{
		return false;
	}
};
