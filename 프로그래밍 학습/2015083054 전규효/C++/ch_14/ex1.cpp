#include <iostream>
using namespace std;

int PrintAstrisk(const int num);

int main()
{
	int score, count;

	cout << "점수 입력: ";
	cin >> score;

	count = PrintAstrisk(score);
	cout << "출력 개수: " << count << endl;

	return 0;
}

int PrintAstrisk(const int num)
{
	for (int i = 0; i < num / 10; i++)
		cout << "*";
	cout << endl;

	return num / 10;
}