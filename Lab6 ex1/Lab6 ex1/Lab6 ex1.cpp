#include <iostream>
/*#include "car.h"
#include "circuit.h"
#include "volvo.h"
#include "seat.h"
#include "rangerover.h"
#include "fiat.h"
#include "bmw.h"*/
using namespace std;

enum Weather {
	Rain,
	Sunny,
	Snow
};

class Car {

public:
	float fuel_capacity;
	float fuel_consumption;
	float average_speed[3];
	const char* model;
	virtual char* GetModel() = 0;
	virtual void* SetModel() = 0;
};

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

class Fiat : public Car {
	Fiat()
	{
		model = "Fiat";
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

class RangeRover : public Car {
	RangeRover()
	{
		model = "Range Rover";
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

class Circuit {
	int length;
	Weather weather;
	struct RaceTimes {
		Car* car;
		float race_time;
	};
	RaceTimes* race_times;
	int nr_cars;
	//static bool sort_race_times(RaceTimes& left, RaceTimes& right)
	//{
		//if(right)
	//}
public:
	Circuit()
	{
		length = 0;
		weather = Weather::Sunny;
		race_times = new RaceTimes[100];
		nr_cars = 0;
	}
	void SetLength(int length)
	{
		this->length = length;
	}
	void SetWeather(Weather weather)
	{
		this->weather = weather;
	}
	void AddCar(Car* car)
	{
		race_times[nr_cars].car = car;
		race_times[nr_cars].race_time = 0;
		nr_cars++;
	}
	void Race()
	{
		float time;
		float weather_speed;
		float fuel_consumption;
		float fuel_consumed;
		float fuel_capacity;
		for (int i = 0; i < nr_cars; i++)
		{
			weather_speed = race_times[i].car->average_speed[this->weather];
			fuel_consumption = race_times[i].car->fuel_consumption;
			fuel_capacity = race_times[i].car->fuel_capacity;
			fuel_consumed = this->length / 100 * fuel_consumption;
			time = (float)this->length / (float)weather_speed;
			if (fuel_consumed > fuel_capacity)
			{
				time = 0xFFFFFFFF;
			}
		}
		//sort(race_times, race_times + nr_cars, sort_race_times);
	}
	void ShowFinalRanks()
	{
		for (int i = 0; i < nr_cars; i++)
		{
			if (race_times[i].race_time == 0xFFFFFFFF)
				break;
			printf("Locul #%d a fost castigat de %s", i, race_times[i].car->GetModel());
		}
	}
	void ShowWhoDidNotFinish()
	{
		for (int i = 0; i < nr_cars; i++)
		{
			if (race_times[i].race_time != 0xFFFFFFFF)
				continue;
			printf("%s did not finish the race", race_times[i].car->GetModel());
		}
	}
};

//Weather::Rain / Weather::Snow ...;
//#define cat_timp while
//#define leo_e_smecher true
//cat_timp(leo_e_smecher)
//{
//
//}
int main()
{
	Circuit c;
	c.SetLength(1000);
	c.SetWeather(Weather::Rain);
	c.AddCar(new Volvo());
	c.AddCar(new BMW());
	c.AddCar(new Seat());
	c.AddCar(new Fiat());
	c.AddCar(new RangeRover());
	c.Race();
	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the slowest.
	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit
	return 0;
}

/*
	Profesorul X a decis sa faca mai multe fetite PowerPuff, si evident are nevoie de sugar/spice and everything nace
	Pt ca ii este lene, da o comanda cu Glovo si ii spune curieruui sa i aduca tot zaharul/condimentele/fainutzul din magazin
	Implementati clasa abstracta PowerPuffGirl si clasele care mostenesc interfata : Bubbles, Blossom, Buttercup

	Fiecare dintre fetite are
	Damage, health

	clasa Profesor care primeste o lista de ingrediente care a reusit curierul sa le cumpere
	ex: sugar, spice, spice, everything_nice, sugar

	Ca sa creeze o fetita powerpuff are nevoie de
	1x sugar
	1x spice
	1x everything_nice

	O sa creeze cat de multe fetite poate
	cu o sansa de 33% sa fie ori un ButterCup, ori un Blossom, ori un Bubbles

	clasa MojoJojo
	care are
	damage, health

	Si apoi implementati o metoda globala care simuleaza lupta intre MojoJojo si fetitele powerpuff ale profesorului

	Daunele se efectueaza in ture
	In fiecare tura fetitele dau damage lui MojoJojo
	si MojoJojo alege o fetita aleatoare care sa o dauneze

	Scrieti o metoda care afiseaza castigatorul bataliei
	Si o metoda care sa afiseze cate fetite au supravietuit si cu cata viata


*/