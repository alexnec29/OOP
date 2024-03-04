#include "numberlist.h"
#include <iostream>
using namespace std;
void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	if (this->count >= 10)
		return false;
	this->numbers[this->count] = x;
	this->count++;
}
void NumberList::Sort()
{
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		for (int i = 0; i < this->count; i++)
		{
			if (this->numbers[i] > this->numbers[i + 1])
			{
				int aux = this->numbers[i];
				this->numbers[i] = this->numbers[i + 1];
				this->numbers[i + 1] = aux;
				sorted = false;
			}
		}
	}
}

void NumberList::Print()
{
	for (int i = 0; i < this->count; i++)
		printf("%d", this->numbers[i]);
	printf("\n");
}