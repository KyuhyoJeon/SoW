#include "test10.h"

int main()
{
	Circle c1;

	c1.SetRadius(4.6);
	c1.SetColor("pink");

	cout << "* ��    : " << c1.GetColor() << endl;
	cout << "* ������: " << c1.GetRadius() << endl;
	cout << "* ��  ��: " << c1.GetArea() << endl;

	return 0;
}