#include "car.h"
class BMW : public Car {
	BMW()
	{
		model = "BMW";
		fuel_capacity = 60;
		fuel_consumption = 20.5;
		average_speed[Weather::Rain] = 150.3;
		average_speed[Weather::Sunny] = 180.3;
		average_speed[Weather::Snow] = 100;
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