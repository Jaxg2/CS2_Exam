#include "Dog.h"


Dog::Dog()
{
	dog_age = 0;
	hum_age = 0;

	//getAge();
	//getName();
	//getBreed();
}

int Dog::getAge(int dog_age, int hum_age)
{
	
	cout << "Enter the age of the dog in years: " << endl;
	cin >> dog_age;

	hum_age = (dog_age * 7);

	return hum_age;

}

string Dog::getName(string name)
{
	cout << "Enter the dog's name: " << endl;
	cin >> name;
	return name;
}

string Dog::getBreed(string breed)
{
	cout << "Enter the dog's breed: " << endl;
	cin >> breed;
	return breed;
}

string Dog::shakeHand(string shake)
{
	shake = name + " reaches out his paw to shake.";
	cout << shake << endl;
	return shake;
}

string Dog::sitDown(string sit)
{
	sit = name + " sits on his back legs.";
	cout << sit << endl;
	return sit;
}