#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

void sortByAverageScore(Person persons[], unsigned int personNum);
float calculateAverageAge(Person persons[], unsigned int personNum);


int main(void)
{
	Person persons[]{
		{"Иванов", "Иван", "Иванович", 36, 73},
		{"Петров", "Пётр", "Петрович", 47, 30},
		{"Сидоров", "Сидор", "Сидорович", 38, 50},
		{"Кошкин", "Валерий", "Олегович", 25, 88},
		{"Собакин", "Константин", "Николаевич", 33, 24},
	};
	unsigned int personNum = sizeof(persons) / sizeof(persons[0]);

	setlocale(LC_ALL, "Russian");

	for (unsigned int index = 0; index < personNum; index++)
		persons[index].printInfo();

	cout << "Average age is " << calculateAverageAge(persons, personNum) << " years." << endl;

	cout << "List of persons sorted by average score:" << endl;

	sortByAverageScore(persons, personNum);
	for (unsigned int index = 0; index < personNum; index++)
		persons[index].printInfo();

	cin.get();

	return 0;
}

void sortByAverageScore(Person persons[], unsigned int personNum)
{
	Person tempPerson;

	// Сортировка массива пузырьком
	for (unsigned int i = 0; i < personNum - 1; i++) {
		for (unsigned int j = 0; j < personNum - i - 1; j++) {
			if (persons[j].getAverageScore() > persons[j + 1].getAverageScore()) {
				// меняем элементы местами
				tempPerson = persons[j];

				persons[j] = persons[j + 1];
				persons[j + 1] = tempPerson;
			}
		}
	}
}

float calculateAverageAge(Person persons[], unsigned int personNum)
{
	float averageAge = 0;

	for (unsigned int index = 0; index < personNum; index++)
	{
		averageAge += persons[index].getAge();
	}

	return averageAge/personNum;
}
