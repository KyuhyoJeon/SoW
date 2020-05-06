#ifndef _TEST01_H_
#define _TEST01_H_

#include <iostream>
using namespace std;

class Weight
{
public:
	void setHeight(const double h);
	void setWeight(const double w);
	double getHeight();
	double getWeight();
	int getWeightStatus();
private:
	int StdWeight();
	double height, weight;
	int WeightStatus;
};

#else
#endif // !_TEST01_H_
