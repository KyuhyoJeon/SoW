#ifndef _TEST04_H_
#define _TEST04_H_

#include <iostream>
using namespace std;

class Course
{
public:
	void setCourseName(const char c[]);
	void setName(const char n[]);
	void ShowCourse();
	int getCourseName(char c[]);
	int getName(char a[][30]);
	int getCount();
private:
	char CourseName[30];
	char name[10][30];
	int count;
};

#else
#endif // !_TEST04_H_
