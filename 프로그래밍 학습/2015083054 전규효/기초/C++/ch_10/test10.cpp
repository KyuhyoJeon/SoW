#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;

	input.open("FileTest.txt");

	if (input.fail())
	{
		cout << "������ �������� �ʽ��ϴ�!!!" << endl;
		return 0;
	}
	else
	{
		cout << "���� ���� �� ����~~~" << endl;
		input.close();
	}

	return 0;
}