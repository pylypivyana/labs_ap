// Lab_04.1.cpp
// < Пилипів Яна >
// Лабораторна робота № 4.1
// Лінійні програми.
// Варіант 12


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cout << "N= "; cin >> N;

    // 1. while
    double S1 = 0;
    int i = N;

    while (i <= 22) 
    {
        S1 += sqrt(i * i + N * N) / i;
        i++;
    }
    cout << "cycle while: " << S1 << endl;

    // 2. do-while
    double S2 = 0;
    i = N;
    do {
        S2 += sqrt(i * i + N * N) / i;
        i++;
    } while (i <= 22);
    cout << "cycle do-while: " << S2 << endl;

    // 3. for i++
    double S3 = 0;
    for (i = N; i <= 22; i++) {
        S3 += sqrt(i * i + N * N) / i;
    }
    cout << "cycle for i++: " << S3 << endl;

    // 4. for i--
    double S4 = 0;
    for (i = 22; i >= N; i--) {
        S4 += sqrt(i * i + N * N) / i;
    }
    cout << "cycle for i--: " << S4 << endl;

    return 0;
}