#include <iostream>
using namespace std;

namespace NS_1 {
	int a = 200;
}

int main()
{
	int a = 100;

	cout << "main() �����Դϴ�." << endl;

	for (int i = 1; i < 3; i++)
	{
		cout << "�ݺ��� for�� �����Դϴ�." << endl;
		cout << "i = " << i << endl;
		cout << "namespace NS_1�� a = " << NS_1::a << endl;
		cout << "a = " << a << endl;
	}

	cout << "namespace NS_1�� a = " << NS_1::a << endl;
	cout << "a = " << a << endl;
	cout << "���α׷��� �����մϴ�." << endl;

	return 0;
}