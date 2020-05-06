#include <iostream>
using namespace std;

#include "ex2.h"

int main()
{
	ITEM Student[10] = { 
		"1", "aaa", {87, 98, 56, }, 
		"2", "bbb", {67, 77, 10, }, 
		"3", "ccc", {100, 98, 100, }, 
		"4", "ddd", {89, 90, 70, }, 
		"5", "eee", {99, 88, 77, }, 
		"6", "fff", {23, 60, 77, }, 
		"7", "ggg", {84, 98, 34, }, 
		"8", "hhh", {100, 82, 87, }, 
		"9", "iii", {65, 77, 45, }, 
		"0", "jjj", {100, 90, 89, } };
	
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 3; j++)
			Student[i].Score[3] = Student[i].Score[3] + Student[i].Score[j];

		Student[i].Score[4] = Student[i].Score[3] / 3;
	}

	ITEM Temp;

	for (i = 0; i < 9; i++)
	{
		for(j=i+1; j<10; j++)
			if (Student[i].Score[3] < Student[j].Score[3])
			{
				Temp = Student[i];
				Student[i] = Student[j];
				Student[j] = Temp;
			}
	}

	for (i = 0; i < 10; i++)
		cout << "학번: " << Student[i].StNum << " | 이름: " << Student[i].Name << " | 점수1: " << Student[i].Score[0] << " | 점수2: " << Student[i].Score[1] << " | 점수3: " << Student[i].Score[2] << " | 총점: " << Student[i].Score[3] << " | 평균: " << Student[i].Score[4] << endl;

	return 0;
}