#include "test02.h"

int TotalCalculation(int jumsu[], int num)
{
	//int total = 0;
	//
	//if (num < 0)
	//	return -1;

	//for (int i = 0; i < num; i++)
	//{
	//	if (jumsu[i] < 0 || jumsu[i] > 100)
	//		return -1;
	//	else
	//		total = total + jumsu[i];
	//}

	//return total;  // ³» ÄÚµå

	int tot = 0;

	if (num < 0)
		return -1;
	
	for (int i = 0; i < num; i++)
	{
		if (jumsu[i] < 0 || jumsu[i] > 100)
			return -1;

		tot = tot + jumsu[i];
	}

	return tot;
}

float Round(float average, int digits)
{
	float r_aver = average;
	int i, temp;

	for (i = 0; i < digits; i++)
		r_aver = r_aver * 10;

	r_aver = r_aver + 5;

	temp = (int)(r_aver / 10);
	r_aver = (float)temp;

	for (i = 0; i < digits - 1; i++)
		r_aver = r_aver / 10;

	return r_aver;
}