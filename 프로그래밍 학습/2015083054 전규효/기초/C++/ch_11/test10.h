#ifndef _TEST10_H_
#define _TEST10_H_

#define PI 3.14159
#include <iostream>
#include <string>
using namespace std;

class GeometricFigure
{
public:
	GeometricFigure();
	~GeometricFigure();
	void SetColor(const string color);
	bool IsPaint();
	string GetColor();
protected:
	string color;
};

class Rectangle : public GeometricFigure
{
public:
	void SetWidth(const double width);
	void SetHeight(const double height);
	double GetWidth();
	double Getheight();
	double GetArea();
private:
	double width, height, area;
};

class Circle : public GeometricFigure
{
public:
	void SetRadius(const double r);
	double GetRadius();
	double GetArea();
private:
	double radius, area;
};

#endif // !_TEST10_H_
