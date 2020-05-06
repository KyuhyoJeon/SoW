#ifndef _TEST01_H_
#define _TEST01_H_

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

private:
	double a;
	double b;
};

#else
#endif // !_TEST01_H_
