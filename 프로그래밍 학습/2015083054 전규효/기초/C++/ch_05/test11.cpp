#include <iostream>
using namespace std;

typedef struct
{
	char Name[30];
	char MPhoneNum[20];
} SAM;

int main()
{
	SAM arr[5] = { "aaa", "000-0000-0000", "bbb", "111-1111-1111", "ccc", "222-2222-2222", "ddd", "333-3333-3333", "eee", "444-4444-4444" };
	int i;

	cout << "�⺻ ũ��: " << sizeof(SAM) << endl;

	for (i = 0; i < 5; i++)
		cout << "arr[" << i << "]�� �ּ�: " << &arr[i] << endl;

	for (i = 0; i < 5; i++)
		cout << "�̸�: " << arr[i].Name << "��ȭ��ȣ: " << arr[i].MPhoneNum << endl;

	return 0;
}