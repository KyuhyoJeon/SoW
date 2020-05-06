#ifndef _EX1_H_
#define _EX1_H_
#define PI 3.141519

#include <iostream>
using namespace std;

class Circle
{
public:
	void setRadius(const double r);
	double getRadius();
	double getArea();

private:
	double radius, area;
};

#endif // !_EX1_H_
