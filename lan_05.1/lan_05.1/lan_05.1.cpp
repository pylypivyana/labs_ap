﻿//lab_05.1

#include <iostream>
#include <cmath>

using namespace std;

double f(const double a, const double b, const double c);

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double q = (f(1, t + s, s) + f(t, t * s, 1)) / (1 + pow(f(s, 1, t), 2));

	cout << "q = " << q << endl;
	return 0;
}
double f(const double a, const double b, const double c) 
{
	return a * sin(b) + b * sin(a) + pow(c, 2);
}