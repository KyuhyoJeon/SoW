#include <iostream>
using namespace std;

typedef struct
{
	char Name[30];
	char MPhoneNum[20];
} SAM;

int main()
{
	SAM a = { "aaa", "000-0000-0000" };
	SAM* pa;

	pa = &a;

	cout << "이름: " << a.Name << endl;
	cout << "이름: " << (*pa).Name << endl;

	return 0;
}