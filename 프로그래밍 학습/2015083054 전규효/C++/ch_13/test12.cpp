#include "test10.h"

int main()
{
	Time t1(7, 30, 20);

	cout << t1.GetTime() << endl;
	cout << "�ð� - �� ����: " << t1.CalSecond() << endl;

	return 0;
}