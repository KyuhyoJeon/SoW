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

	cout << "�̸�: " << a.Name << endl;
	cout << "�̸�: " << pa->Name << endl;
	cout << "��ȭ��ȣ: " << a.MPhoneNum << endl;
	cout << "��ȭ��ȣ: " << pa->MPhoneNum << endl;

	return 0;
}