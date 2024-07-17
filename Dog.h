#ifndef DOG_H
#define DOG_H

#include <iostream>
using namespace std;

class Dog
{
private:
	int dog_age;
	int hum_age;
	string name;
	string breed;
	string shake;
	string sit;
public:
	Dog();
	int getAge(int dog_age, int hum_age);
	string getName(string name);
	string getBreed(string breed);
	string shakeHand(string shake);
	string sitDown(string sit);
};

#endif