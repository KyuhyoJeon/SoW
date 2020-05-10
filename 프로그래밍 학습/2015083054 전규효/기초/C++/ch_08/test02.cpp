#include "test01.h"

void Weight::setHeight(const double h)
{
	height = h;
}

void Weight::setWeight(const double w)
{
	weight = w;
}

double Weight::getHeight()
{
	return height;
}

double Weight::getWeight()
{
	return weight;
}

int Weight::StdWeight()
{
	double sw = (height - 110) * 0.9;

	if (sw + 0.5 < weight)
		WeightStatus = 1;
	else if (sw - 0.5 > weight)
		WeightStatus = -1;
	else
		WeightStatus = 0;

	return 1;
}

int Weight::getWeightStatus()
{
	StdWeight();
	return WeightStatus;
}