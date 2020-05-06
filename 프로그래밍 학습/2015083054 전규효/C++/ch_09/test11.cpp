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
	cout << "TEST 생성자" << endl;
}

TEST::~TEST()
{
	cout << "TEST 소멸자" << endl;
}

int main()
{
	TEST obj;

	cout << "즐거운 C++ 프로그래밍!!!" << endl;

	return 0;
}