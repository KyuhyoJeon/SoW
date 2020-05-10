#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	int quotient, reminder;

	cout << "¼ö1: ";
	cin >> number1;
	cout << "¼ö2: ";
	cin >> number2;

	quotient = number1 / number2;
	reminder = number1 % number2;

	cout << "¸ò: " << quotient << endl;
	cout << "³ª¸ÓÁö: " << reminder << endl;

	return 0;
}