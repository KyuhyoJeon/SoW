#include <iostream>
using namespace std;

int main()
{
	int a = 100;
	int* pa;

	pa = &a;

	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;

	return 0;
}