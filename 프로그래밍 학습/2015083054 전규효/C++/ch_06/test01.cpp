#include <iostream>
using namespace std;

int main()
{
	char Name[30];
	int FunResult;

	FunResult = strcpy_s(Name, 30, "äġ��");

	cout << FunResult << endl;

	cout << Name << endl;

	return 0;
}