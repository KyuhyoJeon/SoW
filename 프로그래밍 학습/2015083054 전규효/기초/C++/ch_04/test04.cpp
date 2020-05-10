#include <iostream>
using namespace std;

int main()
{
	int a = 100;
	int* pa;

	pa = &a;

	cout << "a俊 历厘等 蔼: " << a << endl;
	cout << "a狼 林家: " << &a << endl;

	cout << "************************" << endl;

	cout << "a俊 历厘等 蔼: " << *pa << endl;
	cout << "a狼 林家: " << pa << endl;

	return 0;
}