#include "car.h"
class RangeRover : public Car {
	RangeRover()
	{
		strcpy_s(model,"Range Rover");
		fuel_capacity = 90;
		fuel_consumption = 25;
		average_speed[Weather::Rain] = 130;
		average_speed[Weather::Sunny] = 190.2;
		average_speed[Weather::Snow] = 120;
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