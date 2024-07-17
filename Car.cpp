#include "Car.h"
#include <iostream>
using namespace std;


Car::Car()
{
	year = 0;
	mph = 0;
	kph = 0;
	accel = 0;
	dec = 0;
}

Car::Car(string make, string model, int year)
{

}

string Car::getMake()
{
	cout << "Enter the car's make: " << endl;
	cin >> make;
	return make;

}

string Car::getModel()
{
	cout << "Enter the car's model: " << endl;
	cin >> model;
	return model;

}
int Car::getYear()
{
	cout << "Enter the car's year: " << endl;
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
	mph = mph + 5;

}
void Car::brake()
{
	mph = mph - 5;

}

void Car::printInfo()
{
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
}

void Car::printSpeed()
{
	cout << "The speed of the car after accelerating and decelerating is : " << mph << " miles per hour."
		<< "the speed of the car in kph is : " << kph << "kilometres per hour." << endl;
}