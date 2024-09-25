// Lab_04.2.cpp
// < Пилипів Яна >
// Лабораторна робота № 4.2
// Лінійні програми.
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double X_poch, X_kin, dX, x, y, A, B;

    cout << "X_poch: "; cin >> X_poch;
    cout << "X_kin: ";  cin >> X_kin;
    cout << "dX: ";     cin >> dX;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "----------------------" << endl;

    x = X_poch;
    while (x<=X_kin)
    { 
        A = (2 + x) / (x * x) + 1;
        if (x < 0) {
        B = (x * x * x - 2 * x * x * x * x);
    }
    else if (x >= 0 && x <= 2) {
        B = pow((fabs(x) + exp(x)), 3);
    }
    else {
        B = 4 * cos(x * x - 2);
    }
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dX;
    }
    cout << "----------------------" << endl;
    
    return 0;
}