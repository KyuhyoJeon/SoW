#include <iostream>
using namespace std;

int main()
{
	struct
	{
		char Name[30];
		char MPhoneNum[20];
	} Friend;

	strcpy_s(Friend.Name, 30, "±è°©µ¹");
	strcpy_s(Friend.MPhoneNum, 20, "010-8741-0000");

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	return 0;
}