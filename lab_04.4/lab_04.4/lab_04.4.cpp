// Lab_04.4.cpp
// < Пилипів Яна >
// Лабораторна робота № 4.4
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dX, x, y, R;

    cout << "X_poch: "; cin >> xp;
    cout << "X_kin: ";  cin >> xk;
    cout << "dX: ";     cin >> dX;
    cout << "R: ";     cin >> R;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -R) {
            y = -R;
        }
        else if (x >= R) {
            y = 1 + R;
        }
        else {
            y = R * sin((atan(1.0) / (2 * R)) * x);
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dX;
    }
    cout << "----------------------" << endl;

    return 0;
}