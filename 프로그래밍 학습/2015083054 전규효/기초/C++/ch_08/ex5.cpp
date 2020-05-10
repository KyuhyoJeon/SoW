#include "ex4.h"

void Triangle::set3Base(const double a, const double b, const double c)
{
	base1 = a;
	base2 = b;
	base3 = c;
}

void Triangle::CalArea()
{
	double s = (base1 + base2 + base3) / 2;

	area = sqrt(s * (s - base1) * (s - base2) * (s - base3));
}

double Triangle::getb1()
{
	return base1;
}

double Triangle::getb2()
{
	return base2;
}
double Triangle::getb3()
{
	return base3;
}

double Triangle::getArea()
{
	return area;
}