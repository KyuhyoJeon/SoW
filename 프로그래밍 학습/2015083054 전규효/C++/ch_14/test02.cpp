#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	int quotient, reminder;

	cout << "��1: ";
	cin >> number1;
	cout << "��2: ";
	cin >> number2;

	if (number2 == 0)
	{
		cout << number1 << "�� 0���� ���� �� �����ϴ�." << endl;
		return 0;
	}

	quotient = number1 / number2;
	reminder = number1 % number2;

	cout << "��: " << quotient << endl;
	cout << "������: " << reminder << endl;

	return 0;
}