#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "���� �Է�: ";
	cin >> a;

	if (a >= 90 && a <= 100)
		cout << "����� ������ A�Դϴ�." << endl;
	else if (a >= 80 && a < 90)
		cout << "����� ������ B�Դϴ�." << endl;
	else if (a >= 70 && a < 80)
		cout << "����� ������ C�Դϴ�." << endl;
	else if (a >= 60 && a < 70)
		cout << "����� ������ D�Դϴ�." << endl;
	else
		cout << "����� ������ F�Դϴ�." << endl;

	return 0;
}