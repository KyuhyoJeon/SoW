#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "���� �Է�: ";
	cin >> a;

	if (a > 100)
		cout << "100���� ũ��." << endl;
	else
	{
		if (a < 100)
			cout << "100���� �۴�." << endl;
		else
			cout << "100�̴�." << endl;
	}

	return 0;
}