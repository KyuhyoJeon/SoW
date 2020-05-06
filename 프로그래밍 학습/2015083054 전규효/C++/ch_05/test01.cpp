#include <iostream>
using namespace std;

int main()
{
	char Name[30] = "";
	char MPhoneNum[20] = "";

	strcpy_s(Name, 30, "±è°©µ¹");
	strcpy_s(MPhoneNum, 20, "010-8741-0000");

	cout << Name << endl;
	cout << MPhoneNum << endl;

	return 0;
}