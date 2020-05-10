#include <iostream>
using namespace std;

int main()
{
	typedef struct
	{
		char Name[30];
		char MPhoneNum[20];
	} SAM;

	SAM Friend;

	strcpy_s(Friend.Name, sizeof(Friend.Name), "aaaa");
	strcpy_s(Friend.MPhoneNum, sizeof(Friend.MPhoneNum), "000-0000-0000");

	SAM Friend1;

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;
}