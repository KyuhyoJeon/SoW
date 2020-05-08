#include <iostream>
#pragma warning( disable : 4290 )
using namespace std;

int Total(const int k, const int e, const int m) throw(char*);
double Average(const int s, const int num) throw(char*);

int main()
{
	int kor = -100, eng = 99, math = 98;
	int total = 0;
	double aver;

	try
	{
		total = Total(kor, eng, math);
		aver = Average(total, 3);
		cout << "��: " << total << endl;
		cout << "���: " << aver << endl;
	}
	catch (char* msg)
	{
		cout << "***********************************" << endl;
		cout << msg << endl;
	}

	return 0;
}

int Total(const int k, const int e, const int m) throw(char*)
{
	if (k < 0 || e < 0 || m < 0)
		throw "���� ������ 0���� Ŀ�� �մϴ�.";

	return k + e + m;
}

double Average(const int s, const int num) throw(char*)
{
	if (s < 0 || num <= 0)
		throw "�߸��� �Ű������Դϴ�.";

	return s / (double)num;
}