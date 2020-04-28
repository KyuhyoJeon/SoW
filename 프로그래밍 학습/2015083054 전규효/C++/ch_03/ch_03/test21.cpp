#include <iostream>
using namespace std;

int main()
{
	int a = 100;

	cout << "main() 범위 입니다." << endl;

	for (int i = 1; i < 3; i++)
	{
		cout << "반복문 for의 범위 입니다." << endl;
		cout << "i = " << i << endl;
	}

	cout << "프로그램을 종료합니다." << endl;

	return 0;
}