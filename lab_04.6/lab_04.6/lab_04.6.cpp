// Lab_04.5.cpp
// < Пилипів Яна >
// Лабораторна робота № 4.5
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

double cwhile() {
    double product = 1;

    int n = 1;
    while (n <= 20) {
        double s = 0;
        int k = n;
        while (k <= 20) {
            s += k;
            k++;
        }
        product *= (pow(n * n + pow(s, 2), 1.0)) / (n + 1);
        n++;
    }
    return product;
}

double cdo_while() {
    double product = 1;

    int n = 1;
    do {
        double s = 0;
        int k = n;
        do {
            s += k;
            k++;
        } while (k <= 20);

        product *= (pow(n * n + pow(s, 2), 1.0)) / (n + 1);
        n++;
    } while (n <= 20);

    return product;
}

double cfor_i() {
    double product = 1; 

    for (int n = 1; n <= 20; n++) {
        double s = 0;
        for (int k = n; k <= 20; k++) {
            s += k;
        }
        product *= (pow(n * n + pow(s, 2), 1.0)) / (n + 1);
    }

    return product;
}

double cfor_d() {
    double product = 1; 

    for (int n = 20; n >= 1; n--) {
        double s = 0;
        for (int k = 20; k >= n; k--) {
            s += k;
        }
        product *= (pow(n * n + pow(s, 2), 1.0)) / (n + 1);
    }

    return product;
}

int main() {
    cout << "while: " << cwhile() << endl;
    cout << "do-while: " << cdo_while() << endl;
    cout << "for i++: " << cfor_i() << endl;
    cout << "for i--: " << cfor_d() << endl;

    return 0;
}
