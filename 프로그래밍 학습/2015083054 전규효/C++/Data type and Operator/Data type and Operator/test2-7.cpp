#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	int sum, sub, mul, div1;
	double div2;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Á¤¼ö ÀÔ·Â: ";
	cin >> num1;

	cout << "Á¤¼ö ÀÔ·Â: ";
	cin >> num2;

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div1 = num1 / num2;
	div2 = num1 / num2;

	cout << "µ¡¼À °á°ú" << sum << endl;
	cout << "»¬¼À °á°ú" << sub << endl;
	cout << "°ö¼À °á°ú" << mul << endl;
	cout << "³ª´°¼À(int) °á°ú" << div1 << endl;
	cout << "³ª´°¼À(double) °á°ú" << div2 << endl;
	div2 = num1 / (double)num2;
	cout << "³ª´°¼À(double) °á°ú" << div2 << endl;

	return 0;
}