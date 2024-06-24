#pragma once
#include <iostream>
#include "Article.h"
class Apple : public Article
{
private:
	int price;
	int quantity;
	string from;
public:
	Apple(int quantity, int price, string from);
	string GetType() const override;
	int GetQuantity() const override;
	int GetPrice() const override;
	void Print() const override;
};

