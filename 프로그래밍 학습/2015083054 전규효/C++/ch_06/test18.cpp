#include "test17.h"

int TotalCalculation(const int jumsu[], const int num, int* tot)
{
	if (num < 0)
		return 0;

	*tot = 0;
	for (int i = 0; i < num; i++)
	{
		if (jumsu[i] < 0 || jumsu[i]>100)
			return -1;

		*tot = *tot + jumsu[i];
	}

	return 1;
}

int Round(float* average, const int digits)
{
	float r_aver = *average;
	int temp;

	if (digits < 0 || r_aver < 0)
		return 0;
	
	for (int i = 0; i < digits; i++)
		r_aver = r_aver * 10;

	r_aver = r_aver + 5;
	temp = (int)(r_aver / 10);
	r_aver = (float)temp;

	for (int i = 0; i < digits - 1; i++)
		r_aver = r_aver / 10;

	*average = r_aver;

	return 1;
}