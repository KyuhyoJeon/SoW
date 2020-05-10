#include "config.h"

int main()
{
	SAM Friend;

	strcpy_s(Friend.Name, sizeof(Friend.Name), "aaa");
	strcpy_s(Friend.MPhoneNum, sizeof(Friend.MPhoneNum), "000-0000-0000");

	SAM Friend1;

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;
}