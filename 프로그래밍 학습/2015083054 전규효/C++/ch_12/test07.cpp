#include "test06.h"

GeometricObject::GeometricObject()
{
	line1 = 0;
	line2 = 0;
}

GeometricObject::GeometricObject(const double l1, const double l2)
{
	line1 = l1;
	line2 = l2;
}

void GeometricObject::SetLines(const double l1, const double l2)
{
	line1 = l1;
	line2 = l2;
}

void GeometricObject::GetLines(double* l1, double* l2)
{
	*l1 = line1;
	*l2 = line2;
}

Isosceles::Isosceles()
	: GeometricObject()
{
	area = 0;
	side = 0;
}

Isosceles::Isosceles(const double l1, const double l2)
	: GeometricObject(l1, l2)
{
	area = 0;
	side = 0;
}

void Isosceles::AreaCalculation()
{
	area = line1 * line2 / 2;
}

void Isosceles::RoundCalculation()
{
	side = sqrt(line1 * line1 / 4 + line2 * line2);
}

double Isosceles::GetArea()
{
	return area;
}

double Isosceles::GetSide()
{
	return side;
}

Rectangle::Rectangle()
	: GeometricObject()
{
	area = 0;
	round = 0;
}

Rectangle::Rectangle(const double l1, const double l2)
	: GeometricObject(l1, l2)
{
	area = 0;
	round = 0;
}

void Rectangle::AreaCalculation()
{
	area = line1 * line2;
}

void Rectangle::RoundCalculation()
{
	round = 2 * (line1 + line2);
}

double Rectangle::GetArea()
{
	return area;
}

double Rectangle::GetRound()
{
	return round;
}