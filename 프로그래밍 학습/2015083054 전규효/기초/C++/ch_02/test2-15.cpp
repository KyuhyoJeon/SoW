#include <iostream>
using namespace std;

int main()
{
	bool a;

	a = 10 > 3;
	cout << "10 > 3�� ���: " << a << endl;
	a = 13 <= 10;
	cout << "13 <= 10�� ���: " << a << endl;
	a = 20 != 20;
	cout << "20 != 20�� ���: " << a << endl;
	a = (3 + 10) && (4 < 3);
	cout << "(3 + 10) && (4 < 3)�� ���: " << a << endl;
	a = (3 + 10) || (4 < 3);
	cout << "(3 + 10) || (4 < 3)�� ���: " << a << endl;
	a = !3;
	cout << "!3�� ���: " << a << endl;
	return 0;
}