// LR_3.1.cpp
// < ���������� ������>
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 20


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = tan(x) + 1;
	// ����� 1: ������������ � ��������� ����
	if (x <= -5)
		B = pow(exp(x), abs(1 - x));
	if (-5 < x && x <= 3);
	B = 3.2 + log10(1.8 * x * x);
	if (x > 3)
		B = abs(x) * sqrt(x);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x <= -5)
		B = pow(exp(x), abs(1 - x));
	else
		if (-5 < x && x <= 3)
			B = 3.2 + log10(1.8 * x * x);
		else
			if (x > 3)
				B = abs(x) * sqrt(x);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
