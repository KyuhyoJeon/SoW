#ifndef _TEST08_H_
#define _TEST08_H_

#include <iostream>
#include <string>
using namespace std;

class ImaginaryNumber
{
public:
	ImaginaryNumber();
	ImaginaryNumber(const double a, const double b);
	void SetA(const double a);
	void SetB(const double b);
	double GetA();
	double GetB();
	string GetImaginaryNumber();
	ImaginaryNumber AddImaginary(const ImaginaryNumber ima);
	ImaginaryNumber operator+(const ImaginaryNumber object);
	ImaginaryNumber operator++(void);
	ImaginaryNumber operator++(int dummy);
private:
	double a;
	double b;
};

#else
#endif // !_TEST01_H_
