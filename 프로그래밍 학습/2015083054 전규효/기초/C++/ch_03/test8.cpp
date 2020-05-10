#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "정수 입력: ";
	cin >> a;

	if (a > 100 || a < 0)
		cout << "잘못 입력하셧습니다." << endl;
	else if (a >= 90)
		cout << "당신의 성적은 A입니다." << endl;
	else if (a >= 80)
		cout << "당신의 성적은 B입니다." << endl;
	else if (a >= 70)
		cout << "당신의 성적은 C입니다." << endl;
	else if (a >= 60)
		cout << "당신의 성적은 D입니다." << endl;
	else
		cout << "당신의 성적은 F입니다." << endl;

	return 0;
}