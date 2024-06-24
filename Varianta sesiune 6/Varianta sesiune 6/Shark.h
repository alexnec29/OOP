#pragma once
#include <string>
#include "Animal.h"
class Shark : public Animal
{
	std::string GetName()
	{
		return "Shark";
	}
	bool IsAFish()
	{
		return true;
	}
	bool IsABird()
	{
		return false;
	}
	bool IsAMammal()
	{
		return false;
	}
};
