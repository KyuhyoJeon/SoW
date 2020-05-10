#ifndef _TEST06_H_
#define _TEST06_H_

#include <iostream>
#include <string>
using namespace std;

class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(const double l1, const double l2);
	void SetLines(const double l1, const double l2);
	void GetLines(double* l1, double* l2);
	virtual void AreaCalculation() = 0;
	virtual void RoundCalculation() = 0;

protected:
	double line1, line2;
};

class Isosceles : public GeometricObject
{
public:
	Isosceles();
	Isosceles(const double l1, const double l2);
	void AreaCalculation();
	void RoundCalculation();
	double GetArea();
	double GetSide();
private:
	double area, side;
};

class Rectangle : public GeometricObject
{
public:
	Rectangle();
	Rectangle(const double l1, const double l2);
	void AreaCalculation();
	void RoundCalculation();
	double GetArea();
	double GetRound();
private:
	double area, round;
};

#else
#endif // !_TEST06_H_