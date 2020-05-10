#include <iostream>
using namespace std;

int main()
{
	int a, * pa;
	a = 100;
	pa = &a;

	cout << "a = " << a << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*****************" << endl;
	*pa = 200;
	cout << "a = " << a << endl;
	cout << "*pa = " << *pa << endl;

	return 0;
}