#pragma once
#include <string>
#include "Feline.h"
class Lion : public Feline
{
	std::string GetName()
	{
		return "Lion";
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
	int GetSpeed()
	{
		return 80;
	}
};
