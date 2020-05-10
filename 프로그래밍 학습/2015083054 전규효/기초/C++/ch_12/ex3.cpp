#include "ex1.h"

int main()
{
	POINT p1 = { 10, 20 }, p2 = { -10, -20 }, p3 = { 10, 30 };
	CCoordinates C_obj(p1, p2, p3);

	cout << "(10, 20) ~ (-10, -20): " << C_obj.Distance_C1C2() << endl;
	cout << "(10, 20) ~ (10, 30): " << C_obj.Distance_C1C3() << endl;
	cout << "(-10, -20) ~ (10, 30): " << C_obj.Distance_C2C3() << endl;

	POINT p4 = { 4, 9 }, p5 = { -10, -20 }, p6 = { 15, 30 };
	Triangle T_obj(p4, p5, p6);

	cout << "(4, 9) ~ (-10, -20): " << T_obj.Distance_C1C2() << endl;
	cout << "(4, 9) ~ (15, 30): " << T_obj.Distance_C1C3() << endl;
	cout << "(-10, -20) ~ (15, 30): " << T_obj.Distance_C2C3() << endl;

	if (!T_obj.isValidTriangle())
		cout << "»ï°¢ÇüÀÌ ¾Æ´Õ´Ï´Ù.";

	double s = (T_obj.Distance_C1C2() + T_obj.Distance_C1C3() + T_obj.Distance_C2C3()) / 2;
	double area = sqrt(s * (s - T_obj.Distance_C1C2()) * (s - T_obj.Distance_C1C3()) * (s - T_obj.Distance_C2C3()));

	cout << area << endl;
	cout << T_obj.GetArea() << endl;

	return 0;
}