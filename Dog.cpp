#include "Dog.h"


Dog::Dog()
{
	dog_age = 0;
	hum_age = 0;
}

int Dog::getAge()
{
	
	cout << "Enter the age of the dog in years: ";
	cin >> dog_age;

	hum_age = (dog_age * 7);

	return hum_age;

}

string Dog::getName()
{

}

string Dog::getBreed()
{

}