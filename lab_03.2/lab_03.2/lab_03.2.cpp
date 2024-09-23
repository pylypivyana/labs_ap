// Lab_03_2.cpp
// < Пилипів Яна >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 12
//Спосіб1

#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (x < 0,6 && b + c != 0)
		F = a * x * x + b * b + c;
	if (x > 0,6 && b + c == 0)
		F = (x - a) / (x - c);
	if (!(x < 0, 6 && b + c != 0) && !(x > 0, 6 && b + c == 0))
		F = (x / c) + (x / a);
	cout << endl;
	cout << "1) F = " << F << endl;

	cin.get();
	return 0;
}