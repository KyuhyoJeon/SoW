#ifndef _TEST04_H_
#define _TEST04_H_

#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	Student(const int s1, const int s2, const int s3);
	void setScore(const int s1, const int s2, const int s3);
	void ShowScore();
	void SumAverage();
private:
	int score[3], sum;
	double average;
};

#else
#endif // !_TEST01_H_
