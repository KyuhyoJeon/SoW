#include <iostream>
using namespace std;

typedef struct
{
	char Name[30];
	int age;
} PERSON;

int TEST1(PERSON p);

int main()
{
	PERSON a = { "채치수", 18 };

	cout << "main: " << a.Name << endl;
	cout << "main: " << a.age << endl;

	TEST1(a);

	cout << "*****************************" << endl;

	cout << "main: " << a.Name << endl;
	cout << "main: " << a.age << endl;

	return 0;
}

int TEST1(PERSON p)
{
	cout << "*****************************" << endl;

	cout << "TEST1: " << p.Name << endl;
	cout << "TEST1: " << p.age << endl;

	strcpy_s(p.Name, sizeof(p.Name), "강백호");
	p.age = 16;

	cout << "*****************************" << endl;

	cout << "TEST1: " << p.Name << endl;
	cout << "TEST1: " << p.age << endl;

	return 0;
}