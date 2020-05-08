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
		cout << "��: " << total << endl;
	}
	catch(int i)
	{
		cout << "********************************" << endl;
		cout << i << "���� ���� ������ 0���� Ŀ�� �մϴ�!!!" << endl;
	}

	try
	{
		aver = Average(total, 0);
		cout << "���: " << aver << endl;
	}
	catch (int n)
	{
		cout << "################################" << endl;
		cout << "���� ���� " << n << "���� Ŀ�� �մϴ�!!!" << endl;
	}
	
	return 0;
}