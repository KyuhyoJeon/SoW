#include <iostream>
using namespace std;

int main()
{
	int score;

	do {
		cout << "점수 입력: ";
		cin >> score;
	} while (score > 100 || score < 0);

	cout << "당신이 입력한 점수는 " << score << "입니다. "<< endl;

	return 0;
}