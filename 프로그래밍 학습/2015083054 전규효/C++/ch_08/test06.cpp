#include "test04.h"

int main()
{
	Course c1;

	char course[30];
	char name[10][30];
	char flag = 'y';
	int count = 0;

	cout << "������ �Է�: ";
	cin.getline(course, sizeof(course));

	c1.setCourseName(course);

	cout << "�����л� �̸� �Է�: " << endl;


	while (flag == 'y')
	{
		cout << "�̸�: ";
		cin >> name[count];
		c1.setName(name[count]);
		count += 1;
		cout << "����Է��Ͻðڽ��ϱ�? (y/n) ";
		cin >> flag;
		if (flag == 'n')
			cout << endl;
	}

	c1.ShowCourse();

	return 0;
}