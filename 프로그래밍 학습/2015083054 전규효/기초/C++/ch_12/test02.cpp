#include <iostream>
#include <string>
using namespace std;

class A
{
public:
	string ClassMessage()
	{
		return "class A";
	}
};

class B : public A
{
public:
	string ClassMessage()
	{
		return "class B";
	}
};

void TestFunction1(A x)
{
	cout << x.ClassMessage().data() << endl;
}

int main()
{
	A a;
	B b;

	TestFunction1(a);
	TestFunction1(b);

	return 0;
}