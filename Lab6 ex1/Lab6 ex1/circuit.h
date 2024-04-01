#include "car.h"
#include <iostream>
using namespace std;
class Circuit {
	int length;
	Weather weather;
	struct RaceTimes{
		Car* car;
		float race_time;
	};
	RaceTimes* race_times;
	int nr_cars;
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
