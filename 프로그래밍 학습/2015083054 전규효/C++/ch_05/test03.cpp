#include <iostream>
using namespace std;

int main()
{
	char Name[30] = "";
	char MPhoneNum[20] = "";

	char Name1[30] = "";
	char MPhoneNum1[20] = "";

	strcpy_s(Name, 30, "±è°©µ¹");
	strcpy_s(MPhoneNum, 20, "010-8741-0000");

	strcpy_s(Name1, 30, Name);
	strcpy_s(MPhoneNum1, 20, MPhoneNum);

	cout << Name << endl;
	cout << MPhoneNum << endl;

	cout << Name1 << endl;
	cout << MPhoneNum1 << endl;

	return 0;
}