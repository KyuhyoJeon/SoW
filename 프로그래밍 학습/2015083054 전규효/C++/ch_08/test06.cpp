#include "test04.h"

int main()
{
	Course c1;

	char course[30];
	char name[10][30];
	char flag = 'y';
	int count = 0;

	cout << "과정명 입력: ";
	cin.getline(course, sizeof(course));

	c1.setCourseName(course);

	cout << "수강학생 이름 입력: " << endl;


	while (flag == 'y')
	{
		cout << "이름: ";
		cin >> name[count];
		c1.setName(name[count]);
		count += 1;
		cout << "계속입력하시겠습니까? (y/n) ";
		cin >> flag;
		if (flag == 'n')
			cout << endl;
	}

	c1.ShowCourse();

	return 0;
}