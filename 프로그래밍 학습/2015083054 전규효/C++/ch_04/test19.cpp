#include <iostream>
using namespace std;

int main()
{
	//char idnum[20] = " ", birth[10];

	//cout << "�ֹε�Ϲ�ȣ �Է�: ";
	//cin >> idnum;
	//
	//switch (idnum[7])
	//{
	//case '1':
	//case '2':
	//	strncpy_s(birth, _countof(birth), idnum, 2);
	//	cout << "����� 19" << birth;
	//	break;
	//default:
	//	strncpy_s(birth, _countof(birth), idnum, 2);
	//	cout << "����� 20" << birth;
	//}
	//strncpy_s(birth, _countof(birth), idnum + 2, 2);
	//cout << "�� " << birth;
	//strncpy_s(birth, _countof(birth), idnum + 4, 2);
	//cout << "�� " << birth << "�Ͽ� �¾�̽��ϴ�." << endl;

	char jumin[30] = { 0, };
	char year[5] = { 0, }, month[3] = { 0, }, day[3] = { 0, };

	cout << "�ֹε�Ϲ�ȣ �Է�: ";
	cin >> jumin;

	if (jumin[7] == '1' || jumin[7] == '2')
		strcpy_s(year, _countof(year), "19");
	else
		strcpy_s(year, _countof(year), "20");

	strncat_s(year, _countof(year), jumin, 2);
	strncpy_s(month, _countof(month), jumin + 2, 2);
	strncpy_s(day, _countof(day), jumin + 4, 2);

	cout << "����� ������ " << year << "�� " << month << "�� " << day << "���Դϴ�." << endl;

	return 0;
}