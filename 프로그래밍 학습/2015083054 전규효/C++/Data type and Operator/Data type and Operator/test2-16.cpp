#include <iostream>
using namespace std;

int main()
{
	int a = 1234, b = 0x12345678;

	cout << hex << "16���� a = " << a << dec << "\t\t10���� a = " << a << endl;
	cout << hex << "16���� b = " << b << dec << "\t10���� b = " << b << endl;

	return 0;
}