#include <iostream>
using namespace std;

void TEST();

int main()
{
	cout << "main() 함수 시작입니다." << endl;
	TEST();
	cout << "main() 함수 종료합니다." << endl;

	return 0;
}

void TEST()
{
	cout << "TEST 함수입니다!!!!" << endl;
}