#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "���� �Է�: ";
	cin >> a;

	if (a > 100 || a < 0)
		cout << "�߸� �Է��ϼ˽��ϴ�." << endl;
	else if (a >= 90)
		cout << "����� ������ A�Դϴ�." << endl;
	else if (a >= 80)
		cout << "����� ������ B�Դϴ�." << endl;
	else if (a >= 70)
		cout << "����� ������ C�Դϴ�." << endl;
	else if (a >= 60)
		cout << "����� ������ D�Դϴ�." << endl;
	else
		cout << "����� ������ F�Դϴ�." << endl;

	return 0;
}