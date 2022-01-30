#include <string>

using namespace std;

#pragma once
class Person
{
	string surname;
	string name;
	string patronymic;
	unsigned int age;
	unsigned int averageScore;

public:
	Person() : age(0), averageScore(0) {};
	Person(string surname, string name, string patronymic, unsigned int age=0, unsigned int averageScore=0)
		: surname(surname), name(name), patronymic(patronymic), age(age), averageScore(averageScore) {};
	~Person() {};

	unsigned int getAge() { return age; }
	unsigned int getAverageScore() { return averageScore; }

	void printInfo(void);
};

