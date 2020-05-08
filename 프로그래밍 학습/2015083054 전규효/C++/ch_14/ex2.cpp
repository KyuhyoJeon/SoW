#include <iostream>
using namespace std;

int PrintAstrisk(const int num)
{
	if (num <= 0)
		throw invalid_argument("Invalid Argument!");

	for (int i = 0; i < num / 10; i++)
		cout << "*";
	cout << endl;

	return num / 10;
}

int main()
{
	int score, count;

	try
	{
		cout << "���� �Է�: ";
		cin >> score;

		count = PrintAstrisk(score);
		cout << "��� ����: " << count << endl;
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
	return 0;
}