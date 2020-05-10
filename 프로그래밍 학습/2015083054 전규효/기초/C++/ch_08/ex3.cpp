#include "ex1.h"

int main()
{
	Circle c1, c2;
	double r;
	c1.setRadius(10.2);

	cout << "반지름: " << c1.getRadius() << endl;
	cout << "원의 넓이: " << c1.getArea() << endl;

	cout << "반지름의 값: ";
	cin >> r;

	c2.setRadius(r);

	cout << "원의 넓이: " << c2.getArea() << endl;

	return 0;
}