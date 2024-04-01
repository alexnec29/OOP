#include "car.h"
class Seat : public Car {
	Seat()
	{
		model = "Seat";
		fuel_capacity = 60;
		fuel_consumption = 8.6;
		average_speed[Weather::Rain] = 90.8;
		average_speed[Weather::Sunny] = 120.6;
		average_speed[Weather::Snow] = 70.4;
	}
	const char* GetModel()
	{
		return this->model;
	}
	void* SetModel(const char* model)
	{
		this->model = model;
	}
};