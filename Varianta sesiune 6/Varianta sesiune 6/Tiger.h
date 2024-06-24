#pragma once
#include "Feline.h"
#include <string>
class Tiger : public Feline
{
	std::string GetName()
	{
		return "Tiger";
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
		return 100;
	}
};
