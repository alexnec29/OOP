#pragma once
#include "Article.h"
#include <vector>
using namespace std;
class Shop
{
private:
	vector<Article*> items;
public:
	Shop& Add(Article* item);
	int GetTotalPrice() const;
	int GetQuantity(const std::string& type) const;
	void List() const;
};

