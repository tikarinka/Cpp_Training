#include <iostream>
#include "Person.h"

using namespace std;

void Person::printInfo(void)
{
	cout << surname << " " << name << " " << patronymic << " " << age << " " << averageScore << endl;
}


