// Lab_03_2.cpp
// < ������ ��� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 12
//�����2

#include <iostream>
using namespace std;
int main2()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (x < 0, 6 && b + c != 0) {
		F = a * x * x + b * b + c;
	}
	else if (x > 0, 6 && b + c == 0) {
		F = (x - a) / (x - c);
	}
	else {
		F = (x / c) + (x / a);
	}

	cout << endl;
	cout << "1) F = " << F << endl;

	cin.get();
	return 0;
}