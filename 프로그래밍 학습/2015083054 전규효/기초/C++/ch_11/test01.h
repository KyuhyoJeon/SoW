#ifndef _TEST01_H_
#define _TEST01_H_

#include <iostream>
#include <string>
using namespace std;

class PFigure
{
public:
	PFigure();
	void SetColor(const string color);
	string GetColor();
private:
	string color;
};

class Circle : public PFigure
{
public:
	Circle();
	void SetR(const double r);
	double GetArea();
private:
	double r, area;
};

#else
#endif // !_TEST01_H_