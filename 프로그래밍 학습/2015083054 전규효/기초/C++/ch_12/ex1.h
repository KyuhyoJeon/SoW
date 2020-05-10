#ifndef _EX1_H_
#define _EX1_H_

#include <iostream>
#include <string>
using namespace std;

typedef struct
{
	double x, y;
} POINT;

class CCoordinates
{
public:
	CCoordinates();
	CCoordinates(const POINT p1, const POINT p2, const POINT p3);
	void SetPoints(const POINT p1, const POINT p2, const POINT p3);
	POINT GetPoint1();
	POINT GetPoint2();
	POINT GetPoint3();
	double Distance_C1C2();
	double Distance_C1C3();
	double Distance_C2C3();
protected:
	POINT c1, c2, c3;
};

class Triangle : public CCoordinates
{
public:
	Triangle();
	Triangle(const POINT p1, const POINT p2, const POINT p3);
	bool isValidTriangle();
	double GetArea();
private:
	double area;
};

#else
#endif // !_EX1_H_
