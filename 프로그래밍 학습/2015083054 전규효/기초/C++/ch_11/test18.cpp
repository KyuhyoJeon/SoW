#include "test10.h"

int main()
{
	Circle c1;

	c1.SetRadius(4.6);
	c1.SetColor("pink");

	cout << "* 색    : " << c1.GetColor() << endl;
	cout << "* 반지름: " << c1.GetRadius() << endl;
	cout << "* 면  적: " << c1.GetArea() << endl;

	return 0;
}