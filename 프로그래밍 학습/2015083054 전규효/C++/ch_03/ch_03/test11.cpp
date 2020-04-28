#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "점수 입력: ";
	cin >> num;

	switch (num / 10)
	{
	case 10:
	case 9:
		cout << "당신의 성적은 A입니다." << endl;
		break;
	case 8:
		cout << "당신의 성적은 B입니다." << endl;
		break;
	case 7:
		cout << "당신의 성적은 C입니다." << endl;
		break;
	case 6:
		cout << "당신의 성적은 D입니다." << endl;
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		cout << "당신의 성적은 F입니다." << endl;
		break;
	default:
		cout << "잘못 입력하셨습니다" << endl;
	}

	return 0;
}