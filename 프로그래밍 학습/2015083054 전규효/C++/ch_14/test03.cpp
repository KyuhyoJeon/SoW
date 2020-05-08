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

	try
	{
		if (number2 == 0)
			throw number1;

		quotient = number1 / number2;
		reminder = number1 % number2;
	}
	catch (int e_num)
	{
		cout << e_num << "은 0으로 나눌 수 없습니다!!" << endl;
	}

	return 0;
}