#include "test04.h"

void Course::setCourseName(const char c[])
{
	strcpy_s(CourseName, sizeof(CourseName), c);
	count = 0;
}

void Course::setName(const char n[])
{
	strcpy_s(name[count], sizeof(name[count]), n);
	count += 1;
}

void Course::ShowCourse()
{
	cout << "수강학생 명단: " << endl;
	for (int i = 0; i < count; i++)
		cout << name[i] << "  ";

	cout << endl << "총 수강학생 수: " << count << endl;
}

int Course::getCourseName(char c[])
{
	if (CourseName[0] == '\0')
		return -1;

	strcpy_s(c, sizeof(c), CourseName);

	return 1;
}

int Course::getName(char a[][30])
{
	if (count <= 0)
		return -1;

	for (int i = 0; i < count; i++)
		strcpy_s(a[i], sizeof(a[i]), name[i]);

	return 1;
}

int Course::getCount()
{
	return count;
}