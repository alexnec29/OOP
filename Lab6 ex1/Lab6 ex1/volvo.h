#include "car.h"
class Volvo : public Car {
	Volvo()
	{
		model = "Volvo";
		fuel_capacity = 80;
		fuel_consumption = 12.5;
		average_speed[Weather::Rain] = 127.3;
		average_speed[Weather::Sunny] = 145.5;
		average_speed[Weather::Snow] = 80;
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
