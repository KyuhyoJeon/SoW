#include <iostream>
using namespace std;

int main()
{
	int a = 0x12345678, b, c, d, e;

	b = a >> 4;
	c = a << 4;
	d = a ^ b;
	e = ~a;

	cout << hex << "16���� b = " << b << dec << "\t10���� b = " << b << endl;
	cout << hex << "16���� c = " << c << dec << "\t10���� c = " << c << endl;
	cout << hex << "16���� d = " << d << dec << "\t10���� d = " << d << endl;
	cout << hex << "16���� e = " << e << dec << "\t10���� e = " << e << endl;
	return 0;
}