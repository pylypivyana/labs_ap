		// Lab_02.cpp
// < Пилипів Яна >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 12
#include <iostream>
using namespace std;
int main()
{
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	z1 = ((sin(4*a))/(1+cos(4*a)))*((cos(2*a))/(1+cos(2*a)));
	z2 = 1/(tan((3.0/2)*4*atan(1.0)-a));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	//new cheange made in github
	cin.get();
	return 0;
}
