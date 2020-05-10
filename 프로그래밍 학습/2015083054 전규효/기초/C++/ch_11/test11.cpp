#include "test10.h"

GeometricFigure::GeometricFigure()
{
	color = "white";
}

GeometricFigure::~GeometricFigure()
{
}

void GeometricFigure::SetColor(const string color)
{
	this->color = color;
}

bool GeometricFigure::IsPaint()
{
	if (color == "white")
		return false;
	else
		return true;
}

string GeometricFigure::GetColor()
{
	return color;
}

void Rectangle::SetWidth(const double width)
{
	this->width = width;
}
void Rectangle::SetHeight(const double height)
{
	this->height = height;
}

double Rectangle::GetWidth()
{
	return width;
}

double Rectangle::Getheight()
{
	return height;
}

double Rectangle::GetArea()
{
	this->area = width * height;

	return area;
}

void Circle::SetRadius(const double r)
{
	radius = r;
}

double Circle::GetRadius()
{
	return radius;
}

double Circle::GetArea()
{
	area = PI * radius * radius;

	return area;
}