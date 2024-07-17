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
	int accel;
	int dec;
public: 
	Car();
	Car(string make, string model, int year);
	string getMake();
	string getModel();
	int getYear();
	int getMPH();
	double getKPH();
	void accelerate();
	void brake();
	void printInfo();
	void printSpeed();
};

#endif