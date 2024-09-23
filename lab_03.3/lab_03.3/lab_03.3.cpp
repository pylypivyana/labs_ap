// Lab_03_3.cpp
// < Пилипів Яна >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний аргумент45
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -R) {
		y = -R;
	}
	else if (x >= R) {
		y = 1 + R;
	}
	else {
		y = R * sin((atan(1.0) / (2 * R)) * x);
	}

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
