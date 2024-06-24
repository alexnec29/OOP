#pragma once
#include <iostream>

#include "Article.h"

class VideoGame : public Article
{
private:
	int price;
	int quantity;
	string platform;
	string name;
public:
	VideoGame(int quantity, int price, string platform, string name);
	string GetType() const override;
	int GetQuantity() const override;
	int GetPrice() const override;
	void Print() const override;
};

