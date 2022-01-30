#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

void sortByAverageScore(Person persons[], unsigned int personNum);
float calculateAverageAge(Person persons[], unsigned int personNum);


int main(void)
{
	Person persons[]{
		{"������", "����", "��������", 36, 73},
		{"������", "ϸ��", "��������", 47, 30},
		{"�������", "�����", "���������", 38, 50},
		{"������", "�������", "��������", 25, 88},
		{"�������", "����������", "����������", 33, 24},
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

	// ���������� ������� ���������
	for (unsigned int i = 0; i < personNum - 1; i++) {
		for (unsigned int j = 0; j < personNum - i - 1; j++) {
			if (persons[j].getAverageScore() > persons[j + 1].getAverageScore()) {
				// ������ �������� �������
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
