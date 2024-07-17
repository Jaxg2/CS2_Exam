#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
private: 
	string make;
	string model;
	int year;
	int mph;
	double kph;
public: 
	Car(string make, string model, int year);
	string getMake();
	string getModel();
	int getYear();
	int getMPH();
	double getKPH();
	void accelerate();
	void brake();
};

#endif