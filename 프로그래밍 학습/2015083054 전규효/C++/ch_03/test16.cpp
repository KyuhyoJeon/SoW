#include <iostream>
using namespace std;

int main() {
	int score;
	char flag = 'y';

	do {
		if (flag == 'n')
			cout << "점수의 범위가 잘못되었습니다. 다시 입력하세요!!!" << endl;

		cout << "점수 입력: ";
		cin >> score;

		flag = 'n';
	} while (score > 100 || score < 0);

	cout << "당신이 입력한 점수는 " << score << "입니다." << endl;

	return 0;
}