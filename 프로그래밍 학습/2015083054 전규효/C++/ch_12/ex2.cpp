#include "ex1.h"

CCoordinates::CCoordinates()
{
	c1.x = 0;
	c1.y = 0;
	c2.x = 0;
	c2.y = 0;
	c3.x = 0;
	c3.y = 0;
}

CCoordinates::CCoordinates(const POINT p1, const POINT p2, const POINT p3)
{
	c1 = p1;
	c2 = p2;
	c3 = p3;
}

void CCoordinates::SetPoints(const POINT p1, const POINT p2, const POINT p3)
{
	c1 = p1;
	c2 = p2;
	c3 = p3;
}

POINT CCoordinates::GetPoint1()
{
	return c1;
}

POINT CCoordinates::GetPoint2()
{
	return c2;
}

POINT CCoordinates::GetPoint3()
{
	return c3;
}

double CCoordinates::Distance_C1C2()
{
	double dist;
	
	if (c1.x == c2.x)
		dist = sqrt((c1.y - c2.y) * (c1.y - c2.y));
	else if (c1.y == c2.y)
		dist = sqrt((c1.x - c2.x) * (c1.x - c2.x));
	else
		dist = sqrt((c1.x - c2.x) * (c1.x - c2.x) + (c1.y - c2.y) * (c1.y - c2.y));

	return dist;
}

double CCoordinates::Distance_C1C3()
{
	double dist;

	if (c1.x == c3.x)
		dist = sqrt((c1.y - c3.y) * (c1.y - c3.y));
	else if (c1.y == c3.y)
		dist = sqrt((c1.x - c3.x) * (c1.x - c3.x));
	else
		dist = sqrt((c1.x - c3.x) * (c1.x - c3.x) + (c1.y - c3.y) * (c1.y - c3.y));
	return dist;
}

double CCoordinates::Distance_C2C3()
{
	double dist;

	if (c2.x == c3.x)
		dist = sqrt((c2.y - c3.y) * (c2.y - c3.y));
	else if (c2.y == c3.y)
		dist = sqrt((c2.x - c3.x) * (c2.x - c3.x));
	else
		dist = sqrt((c2.x - c3.x) * (c2.x - c3.x) + (c2.y - c3.y) * (c2.y - c3.y));
	return dist;
}

Triangle::Triangle()
	: CCoordinates()
{
	area = 0;
}

Triangle::Triangle(const POINT p1, const POINT p2, const POINT p3)
	: CCoordinates(p1, p2, p3)
{
	area = 0;
}

bool Triangle::isValidTriangle()
{
	double a = Distance_C1C2(), b = Distance_C1C3(), c = Distance_C2C3();
	if (a >= b && a >= c)
	{
		if (a <= b + c)
			return true;
		else
			return false;
	}
	else if (b >= a && b >= c)
	{
		if (b <= a + c)
			return true;
		else
			return false;
	}
	else if (c >= a && c >= b)
	{
		if (c <= a + b)
			return true;
		else
			return false;
	}
	return false;
}

double Triangle::GetArea()
{
	if (!isValidTriangle())
		return 0;

	double abs = c1.x * c2.y + c2.x * c3.y + c3.x * c1.y - c2.x * c1.y - c3.x * c2.y - c1.x * c3.y;
	
	if (abs < 0)
		abs = abs * -1;

	area = abs / 2;

	return area;
}
