#include <iostream>
using namespace std;

int PrintAstrisk(const int num);

int main()
{
	int score, count;

	cout << "���� �Է�: ";
	cin >> score;

	count = PrintAstrisk(score);
	cout << "��� ����: " << count << endl;

	return 0;
}

int PrintAstrisk(const int num)
{
	for (int i = 0; i < num / 10; i++)
		cout << "*";
	cout << endl;

	return num / 10;
}