// Lab_03_1.cpp
// < ������ ��� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ������ �����.
// ������ 12
// �����2: ������������ � ������ ����
#include <iostream>
#include <cmath>

using namespace std;
int main2()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double f1; // �������� ��������� - ������������� ����� ������� ������
	double f2; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;
	f1 = (2 + x) / (x * x) + 1;

	if (x < 0) {
		f2 = x * x * x - 2 * pow(x, 4);
	}
	else if (x > 2) {
		f2 = pow(fabs(x) + exp(x), 3);
	}
	else {
		f2 = 4 * cos(x * x - 2);
	}

	y = f1 + f2;

	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}