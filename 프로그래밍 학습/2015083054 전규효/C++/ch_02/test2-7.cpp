#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	int sum, sub, mul, div1;
	double div2;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "���� �Է�: ";
	cin >> num1;

	cout << "���� �Է�: ";
	cin >> num2;

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div1 = num1 / num2;
	div2 = num1 / num2;

	cout << "���� ���" << sum << endl;
	cout << "���� ���" << sub << endl;
	cout << "���� ���" << mul << endl;
	cout << "������(int) ���" << div1 << endl;
	cout << "������(double) ���" << div2 << endl;
	div2 = num1 / (double)num2;
	cout << "������(double) ���" << div2 << endl;

	return 0;
}