// lab_05.5

#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return sin(x) - cos(x);
}
    
//дихотомія
double H(double a, double b, double eps, int &d) {
    d++; 
    double m = (a + b) / 2.0;

    if (fabs(b - a) < eps || fabs(f(m)) < eps) {
        return m;
    }

    if (f(a) * f(m) < 0) {
        return H(a, m, eps, d);
    }
    else {
        return H(m, b, eps, d);
    }
}

int main() {
    double a, b, eps;
    int d = 0;

    cout << "[a, b]: " << endl;
    cin >> a >> b;

    cout << "eps: ";
    cin >> eps;

    if (f(a) * f(b) >= 0) {
        cout << "x doesn't exist" << endl;
    }
    else {
        // Виклик функції для пошуку кореня
        double x = H(a, b, eps, d);
        cout << "x: " << x << endl;
        cout << "depth: " << d << endl;
    }

    return 0;
}
