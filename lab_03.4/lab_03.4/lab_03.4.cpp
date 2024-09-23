// Lab_03_4.cpp
// < Пилипів Яна >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if ( - R<=x && x<=0 && y <= -sqrt(R*R-(x+R)*(x+R))+R && y>=0)
		cout << "yes" << endl;

	if (0 <= x && x<=R && y >= sqrt(R * R - (x - R) * (x - R)) - R && y<=0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}