#include <iostream>>
using namespace std;

int main()
{
	int score[4] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		cout << i << "��° ���� �Է�: ";
		cin >> score[i];
		score[3] = score[3] + score[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (i == 3)
			cout << "����: " << score[3] << endl;
		else
			cout << i << "��° ����: " << score[i] << endl;
	}

	return 0;
}