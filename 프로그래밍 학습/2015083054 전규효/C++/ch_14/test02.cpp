#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	int quotient, reminder;

	cout << "수1: ";
	cin >> number1;
	cout << "수2: ";
	cin >> number2;

	if (number2 == 0)
	{
		cout << number1 << "는 0으로 나눌 수 없습니다." << endl;
		return 0;
	}

	quotient = number1 / number2;
	reminder = number1 % number2;

	cout << "몫: " << quotient << endl;
	cout << "나머지: " << reminder << endl;

	return 0;
}