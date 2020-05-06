#include <iostream>
using namespace std;

int main()
{
	struct {
		char Name[30];
		char MPhoneNum[20];
	} Friend, Friend1;

	strcpy_s(Friend.Name, 30, "aaa");
	strcpy_s(Friend.MPhoneNum, 20, "000-0000-0000");

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;
}