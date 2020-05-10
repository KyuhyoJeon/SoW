#include <iostream>
using namespace std;

int main()
{
	struct sam
	{
		char Name[30];
		char MPhoneNum[20];
	};

	typedef struct sam SAM;

	SAM Friend, Friend1;

	strcpy_s(Friend.Name, sizeof(Friend.Name), "aaa");
	strcpy_s(Friend.MPhoneNum, sizeof(Friend.MPhoneNum), "000-0000-0000");

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;
}