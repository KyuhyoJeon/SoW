#include <iostream>
using namespace std;

int main()
{
	int score;

	do {
		cout << "���� �Է�: ";
		cin >> score;
	} while (score > 100 || score < 0);

	cout << "����� �Է��� ������ " << score << "�Դϴ�. "<< endl;

	return 0;
}