// Lab_04.3.cpp
// < Пилипів Яна >
// Лабораторна робота № 4.3
// Лінійні програми.
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dX, x, F, a, b, c;

    cout << "X_poch: "; cin >> xp;
    cout << "X_kin: "; cin >> xk;
    cout << "dX: "; cin >> dX;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "F" << " |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 0,6 && b + c !=0) {
            F = a * x * x + b * b + c;
        }
        else if (x > 0, 6 && b + c == 0) {
            F = (x - a) / (x - c);
        }
        else {
            F = (x / c) + (x / a);
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;
        x += dX;
    }
    cout << "----------------------" << endl;

    return 0;
}