#include <iostream>
using namespace std;
class Car {

public:
	float fuel_capacity;
	float fuel_consumption;
	float average_speed[3];
	
	const char* model;
public:
	virtual char* GetModel() = 0;
	virtual void* SetModel() = 0;

	
};
/*
	clasa abstracta

*/