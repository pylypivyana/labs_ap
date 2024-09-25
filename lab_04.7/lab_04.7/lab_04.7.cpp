// Lab_04.7.cpp
// < Пилипів Яна >
// Лабораторна робота № 4.7
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dx, eps, x, a=0, s=0,r=0;
    int n = 0;

    cout << "xp: "; cin >> xp;
    cout << "xk: "; cin >> xk;
    cout << "dx: "; cin >> dx;
    cout << "eps: "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "exp(x)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;
    while (x<=xk)
    {
        n = 0;
        a = 1;
        s = -atan(1.0) / 2;
        do {
            n++;
            r = -(1.0 * x * x * (2 * n - 1)) / (2 * n + 1);
            a *= r;
            s += a;
        } while (fabs(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << exp(x) << " |"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}