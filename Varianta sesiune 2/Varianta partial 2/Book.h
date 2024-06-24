#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Article.h"

class Book : public Article
{
private:
	int price;
	int quantity;
	string title;
	string author;
public:
	Book(int quantity, int price, string title, string author);
	string GetType() const override;
	int GetQuantity() const override;
	int GetPrice() const override;
	void Print() const override;
};

