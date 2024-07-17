#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string make, string model, int year)
{
	year = 0;
	mph = 0;
	kph = 0;


}

string Car::getMake()
{
	cout << "Enter the make: " << endl;
	cin >> make;
	return make;

}

string Car::getModel()
{
	cout << "Enter the model: " << endl;
	cin >> model;
	return model;

}
int Car::getYear()
{
	cout << "Enter the year: " << endl;
	cin >> year;
	return year;

}

int Car::getMPH()
{
	cout << "Enter the speed in mph: " << endl;
	cin >> mph;
	return mph;
}

double Car::getKPH()
{
	kph = (mph * 1.60934);
	return kph;
}

void Car::accelerate()
{
	

}
void Car::brake()
{

}