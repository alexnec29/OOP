#include "VideoGame.h"
VideoGame::VideoGame(int quantity, int price, string platform, string name)
{
	this->quantity = quantity;
	this->price = price;
	this->platform = platform;
	this->name = name;
}
string VideoGame::GetType() const
{
	return "VideoGame";
}
int VideoGame::GetQuantity() const
{
	return this->quantity;
}
int VideoGame::GetPrice() const
{
	return this->price;
}
void VideoGame::Print() const
{
	std::cout << "VideoGame (Platform=" << this->platform << ", Name=" << this->name << ") Price=" << this->price << " Quantity=" << this->quantity << std::endl;
}