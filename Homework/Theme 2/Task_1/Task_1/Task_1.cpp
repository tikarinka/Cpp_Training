// Вариант 1. Заполнить вектор v1 содержимым второй половины вектора v2.

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	vector<int> array1 = { 34, 54, 24, 456, 76, 35, 21, 45, 67, 89, 25, 567, 34 };
	vector<int> array2;
	vector<int>::iterator itor;

    cout << "Элементы первого вектора:" << endl;
    for_each(array1.begin(), array1.end(), [](int value) {cout << value << " "; });
    cout << "\nРазмер: " << array1.size() << endl;

    itor = array1.begin();
    itor += array1.size()/2;

    array2.assign(itor, array1.end());

    cout << "Элементы второго вектора:" << endl;
    for_each(array2.begin(), array2.end(), [](int value) {cout << value << " "; });
    cout << "\nРазмер: " << array2.size() << endl;

    return 0;
}

