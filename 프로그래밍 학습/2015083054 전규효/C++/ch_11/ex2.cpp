#include "ex1.h"

GeometricFigure::GeometricFigure()
{
	color = "white";
}

GeometricFigure::GeometricFigure(const string color)
{
	this->color = color;
}

void GeometricFigure::SetColor(const string color)
{
	this->color = color;
}

string GeometricFigure::GetColor()
{
	return color;
}

Triangle::Triangle()
{
	side1 = 0;
	side2 = 0;
	side3 = 0;
	area = 0;
}

Triangle::Triangle(const string color, const double side1, const double side2, const double side3)
	: GeometricFigure(color)
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
	area = 0;
}

void Triangle::SetSides(const double side1, const double side2, const double side3)
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
	area = 0;
}

void Triangle::GetSides(double* side1, double* side2, double* side3)
{
	*side1 = this->side1;
	*side2 = this->side2;
	*side3 = this->side3;
}

void Triangle::CalArea()
{
	double s = (side1 + side2 + side3) / 2;
	area = sqrt(s*((s - side1) * (s - side2) * (s - side3)));
}

double Triangle::GetArea()
{
	return area;
}