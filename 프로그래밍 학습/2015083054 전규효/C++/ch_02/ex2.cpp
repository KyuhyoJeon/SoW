#include <iostream>
using namespace std;

int main()
{
	int score1 = 100, score2 = 78, score3 = 78;
	int total;
	float average;

	total = score1 + score2 + score3;
	average = total / static_cast<float>(3); // 또는 avarage = total / (float)3;

	cout << "합계: " << total << endl;
	cout << "평균: " << average << endl;

	return 0;
}