#include <iostream>
using namespace std;

int main()
{
	int score1 = 100, score2 = 78, score3 = 78;
	int total;
	float average;

	total = score1 + score2 + score3;
	average = total / static_cast<float>(3); // �Ǵ� avarage = total / (float)3;

	cout << "�հ�: " << total << endl;
	cout << "���: " << average << endl;

	return 0;
}