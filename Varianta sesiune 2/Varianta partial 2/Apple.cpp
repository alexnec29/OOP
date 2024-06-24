#include "Apple.h"
#include <iostream>
Apple::Apple(int quantity, int price, string from)
{
	this->quantity = quantity;
	this->price = price;
	this->from = from;
}
string Apple::GetType() const
{
	return "Apple";
}
int Apple::GetQuantity() const
{
	return this->quantity;
}
int Apple::GetPrice() const
{
	return this->price;
}
void Apple::Print() const
{
	std::cout << "Apple (from=" << this->from << ") Price=" << this->price << " Quantity=" << this->quantity << std::endl;
}