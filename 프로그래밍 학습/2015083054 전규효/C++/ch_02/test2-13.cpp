#include <iostream>
using namespace std;

int main()
{
	int i_add, i_mul;
	i_add = 0;
	i_mul = 1;

	i_add += 5;
	i_add += 5;
	i_add += 5;

	i_mul *= 5;
	i_mul *= 5;
	i_mul *= 5;

	cout << "µ¡¼À ´©Àû °á°ú: " << i_add << endl;
	cout << "°ö¼À ´©Àû °á°ú: " << i_mul << endl;

	int a = 10;
	a++;
	cout << "a = " << a << endl;
	cout << "a = " << a++ << endl;
	cout << "a = " << ++a << endl;
	cout << "a = " << a << endl;

	return 0;
}