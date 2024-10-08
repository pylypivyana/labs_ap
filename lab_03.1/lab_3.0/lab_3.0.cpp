﻿// Lab_03_1.cpp
// < Пилипів Яна >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 12
// Спосіб1: розгалуження в скороченій формі
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double f1; // проміжний результат - функціонально стала частина виразу
	double f2; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	f1 = (2 + x) / (x * x) + 1;

	if (x < 0)
		f2 = x * x * x - 2 * pow(x, 4);
	if (0 <= x && x <= 2)
		f2 = pow(fabs(x) + exp(x), 3);
	if (x > 2)
		f2 = 4 * cos(x * x - 2);

	y = f1 + f2;

	cout << endl;
	cout << "1) y = " << y << endl;

	cin.get();
	return 0;
}