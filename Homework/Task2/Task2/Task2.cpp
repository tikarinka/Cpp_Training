
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	vector<string> Vector = {
		"Иванов",
		"Петров",
		"Сидоров",
		"Кошкин",
		"Собакин",
		"Медведев",
		"Степашкин",
		"Синицин",
		"Пчёлкин",
		"Перепёлкин",
	};

	cout << "Элементы вектора:" << endl;

	for_each(Vector.begin(), Vector.end(), [](string data)
	{
		cout << data << endl;
	});

	cout << endl << "Отсортированные элементы вектора:" << endl;

	unsigned int permutationsNumber = 0;

	sort(Vector.begin(), Vector.end(), [&permutationsNumber](string data1, string data2)->bool
	{
		if (data1 < data2)
		{
			permutationsNumber++;
			return true;
		}
		else
		{
			return false;
		}
	});

	for_each(Vector.begin(), Vector.end(), [](string data)
	{
		cout << data << endl;
	});

	cout << endl << "Количество перестановок: " << permutationsNumber << endl;

	return 0;
}

