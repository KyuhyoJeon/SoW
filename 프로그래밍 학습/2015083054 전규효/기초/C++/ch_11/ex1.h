#ifndef _EX1_H_
#define _EX1_H_

#include <iostream>
#include <string>
using namespace std;

class GeometricFigure
{
public:
	GeometricFigure();
	GeometricFigure(const string color);
	void SetColor(const string color);
	string GetColor();
private:
	string color;
};

class Triangle : public GeometricFigure
{
public:
	Triangle();
	Triangle(const string color, const double side1, const double side2, const double side3);
	void SetSides(const double side1, const double side2, const double side3);
	void CalArea();
	void GetSides(double* side1, double* side2, double* side3);
	double GetArea();
private:
	double side1, side2, side3, area;
};


#else
#endif // !_EX1_H_
