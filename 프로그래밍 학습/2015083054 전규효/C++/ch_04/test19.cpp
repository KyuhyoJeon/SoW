#include <iostream>
using namespace std;

int main()
{
	//char idnum[20] = " ", birth[10];

	//cout << "주민등록번호 입력: ";
	//cin >> idnum;
	//
	//switch (idnum[7])
	//{
	//case '1':
	//case '2':
	//	strncpy_s(birth, _countof(birth), idnum, 2);
	//	cout << "당신은 19" << birth;
	//	break;
	//default:
	//	strncpy_s(birth, _countof(birth), idnum, 2);
	//	cout << "당신은 20" << birth;
	//}
	//strncpy_s(birth, _countof(birth), idnum + 2, 2);
	//cout << "년 " << birth;
	//strncpy_s(birth, _countof(birth), idnum + 4, 2);
	//cout << "월 " << birth << "일에 태어나셨습니다." << endl;

	char jumin[30] = { 0, };
	char year[5] = { 0, }, month[3] = { 0, }, day[3] = { 0, };

	cout << "주민등록번호 입력: ";
	cin >> jumin;

	if (jumin[7] == '1' || jumin[7] == '2')
		strcpy_s(year, _countof(year), "19");
	else
		strcpy_s(year, _countof(year), "20");

	strncat_s(year, _countof(year), jumin, 2);
	strncpy_s(month, _countof(month), jumin + 2, 2);
	strncpy_s(day, _countof(day), jumin + 4, 2);

	cout << "당신의 생일은 " << year << "년 " << month << "월 " << day << "일입니다." << endl;

	return 0;
}