#include <iostream>
using namespace std;

double Average(const int total, const int num)
{
	if (total < 0 || num == 0)
		throw num;

	return total / (double)num;
}

int sum(const int score1, const int score2, const int score3)
{
	if (score1 < 0 || score2 < 0 || score3 < 0)
		throw 3;

	return score1 + score2 + score3;
}

int main()
{
	int kor = -100, eng = 99, math = 98;
	int total = 0;
	double aver = 0;

	try
	{
		total = sum(kor, eng, math);
		cout << "합: " << total << endl;
	}
	catch(int i)
	{
		cout << "********************************" << endl;
		cout << i << "개의 과목 점수는 0보다 커야 합니다!!!" << endl;
	}

	try
	{
		aver = Average(total, 0);
		cout << "평균: " << aver << endl;
	}
	catch (int n)
	{
		cout << "################################" << endl;
		cout << "과목 수는 " << n << "보다 커야 합니다!!!" << endl;
	}
	
	return 0;
}