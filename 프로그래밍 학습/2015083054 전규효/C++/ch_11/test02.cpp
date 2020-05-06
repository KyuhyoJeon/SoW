#include "test01.h"

PFigure::PFigure()
{
	this->color = "white";
}

void PFigure::SetColor(const string color)
{
	this->color = color;
}

string PFigure::GetColor()
{
	return color;
}

Circle::Circle()
{
	this->r = 0;
	this->area = 0;
}

void Circle::SetR(const double r)
{
	this->r = r;
}

double Circle::GetArea()
{
	this->area = 3.14 * r * r;
	return area;
}