#include <iostream>
using namespace std;

int main()
{
	int a = 100;

	cout << "main() �����Դϴ�." << endl;

	for (int i = 1; i < 3; i++)
	{
		int a = 200;
		cout << "�ݺ��� for�� �����Դϴ�." << endl;
		cout << "i = " << i << endl;
		cout << "a = " << a << endl;
	}
	cout << "a = " << a << endl;
	cout << "���α׷��� �����մϴ�." << endl;

	return 0;
}