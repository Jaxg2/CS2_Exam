//Jaxon

#include <iostream>
#include "Dog.h"
#include "Car.h"
using namespace std;

int main()
{
	Dog dog;

	dog.getAge();
	dog.getBreed();
	dog.getName();

	dog.printInfo();
	dog.shakeHand();
	dog.sitDown();

	Car car;

	car.getMake();
	car.getModel();
	car.getYear();
	car.getMPH();
	car.getKPH();

	car.accelerate();
	car.brake();


	car.printSpeed();

}