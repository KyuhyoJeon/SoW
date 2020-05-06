#ifndef _EX4_H_
#define _EX4_H_

#include <iostream>
using namespace std;

class Triangle
{
public:
	void set3Base(const double a, const double b, const double c);
	void CalArea();
	double getb1();
	double getb2();
	double getb3();
	double getArea();
private:
	double base1, base2, base3, area;
};

#else
#endif // !_EX4_H_
