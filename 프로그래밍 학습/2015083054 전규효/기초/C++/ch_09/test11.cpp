#include <iostream>
using namespace std;

class TEST
{
public:
	TEST();
	~TEST();
};

TEST::TEST()
{
	cout << "TEST ������" << endl;
}

TEST::~TEST()
{
	cout << "TEST �Ҹ���" << endl;
}

int main()
{
	TEST obj;

	cout << "��ſ� C++ ���α׷���!!!" << endl;

	return 0;
}