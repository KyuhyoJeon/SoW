#include <iostream>
using namespace std;

int main()
{
	int a = 100, b = 32;
	int q, r;

	q = a / b;
	r = a % b;

	cout << a << " / " << b << " 의 몫 = " << q << endl;
	cout << a << " / " << b << " 의 나머지 = " << r << endl;

	return 0;
}