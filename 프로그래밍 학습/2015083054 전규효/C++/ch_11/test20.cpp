#include "test19.h"

CON1::CON1(const int c)
{
	this->c = c;
	cout << "*** CON1�� ������ ***" << endl;
	cout << "c= " << c << endl;
}

CON1::~CON1()
{
	cout << "*** CON1�� �Ҹ��� ***" << endl;
}

CON2::CON2()
	: CON1(300)
{
	cout << "*** CON2�� ������ ***" << endl;
	cout << "c= " << c << endl;
}

CON2::~CON2()
{
	cout << "*** CON2�� �Ҹ��� ***" << endl;
}