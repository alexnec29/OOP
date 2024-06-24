#include "Book.h"
Book::Book(int quantity, int price, string title, string author)
{
	this->quantity = quantity;
	this->price = price;
	this->title = title;
	this->author = author;
}
string Book::GetType() const
{
	return "Book";
}
int Book::GetQuantity() const
{
	return this->quantity;
}
int Book::GetPrice() const
{
	return this->price;
}
void Book::Print() const
{
	std::cout << "Book (Title=" << this->title << ", Author=" << this->author << ") Price=" << this->price << " Quantity=" << this->quantity << std::endl;
}