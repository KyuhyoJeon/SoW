#include <iostream>
using namespace std;

int main()
{
	int a = 100;

	cout << "main() 범위입니다." << endl;

	for (int i = 1; i < 3; i++)
	{
		int a = 200;
		cout << "반복문 for의 범위입니다." << endl;
		cout << "i = " << i << endl;
		cout << "a = " << a << endl;
	}
	cout << "a = " << a << endl;
	cout << "프로그램을 종료합니다." << endl;

	return 0;
}