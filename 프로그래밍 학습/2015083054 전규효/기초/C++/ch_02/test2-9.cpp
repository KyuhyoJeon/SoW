#include <iostream>
using namespace std;

int main()
{
	int a = 20, b = 3;
	float c, d;

	c = a / 3.5f;
	d = (float)a / b; // 또는 d=static_cast<flaot>(a)/b;

	cout << "연산 결과: 정수형 = " << c << endl;
	cout << "연산 결과: 실수형 = " << d << endl;
	return 0;
}