#pragma once
#include <vector>

#include "Procesator.h"

class MyVector
{
	std::vector<int> data;
	std::vector<Procesator*> processors;
public:
	operator int() const
	{
		return data.size();
	}
	operator unsigned int() const
	{
		return processors.size();
	}
	MyVector& operator+=(int number)
	{
		data.push_back(number);
		return *this;
	}
	MyVector& operator+=(std::initializer_list<int> values) {
		data.insert(data.end(), values.begin(), values.end());
		return *this;
	}
	MyVector& operator+=(Procesator* proces)
	{
		processors.push_back(proces);
		return *this;
	}
	void process()
	{
		for (auto processor : processors) {
			processor->Run(data.data(), data.size());
		}
	}
	void clear()
	{
		data.clear();
	}
};

