#pragma once
#include <string>
using namespace std;
class Article
{
public:
	virtual string GetType() const = 0;
	virtual int GetQuantity() const = 0;
	virtual int GetPrice() const = 0;
	virtual void Print() const = 0;
};

