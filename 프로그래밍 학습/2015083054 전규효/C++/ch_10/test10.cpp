#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;

	input.open("FileTest.txt");

	if (input.fail())
	{
		cout << "파일이 존재하지 않습니다!!!" << endl;
		return 0;
	}
	else
	{
		cout << "파일 열기 후 실행~~~" << endl;
		input.close();
	}

	return 0;
}