#include "ex1.h"

int main()
{
	Circle c1, c2;
	double r;
	c1.setRadius(10.2);

	cout << "������: " << c1.getRadius() << endl;
	cout << "���� ����: " << c1.getArea() << endl;

	cout << "�������� ��: ";
	cin >> r;

	c2.setRadius(r);

	cout << "���� ����: " << c2.getArea() << endl;

	return 0;
}