#include <iostream>>
using namespace std;

int main()
{
	int score[4] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		cout << i << "번째 점수 입력: ";
		cin >> score[i];
		score[3] = score[3] + score[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (i == 3)
			cout << "총점: " << score[3] << endl;
		else
			cout << i << "번째 점수: " << score[i] << endl;
	}

	return 0;
}