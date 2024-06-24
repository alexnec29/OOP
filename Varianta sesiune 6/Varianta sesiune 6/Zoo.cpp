#include "Zoo.h"
int Zoo::GetTotalAnimals()
{
	int count = 0;
	for (auto a : animals)
	{
		count++;
	}
	return count;
}