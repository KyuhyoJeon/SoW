#include "test13.h"

int main()
{
	Time t1(7, 30, 20);

	cout << t1.GetTime() << endl;
	cout << "�ð� - �� ����: " << t1.CalSecond() << endl;

	Time t2(4, 50, 23);

	if (t1 >= t2)
		cout << t1.GetTime() << "�� " << t2.GetTime() << "���� ũ�ų� ����!!" << endl;
	else
		cout << t2.GetTime() << "�� " << t1.GetTime() << "���� ũ�ų� ����!!" << endl;

	if (t1 <= t2)
		cout << t2.GetTime() << "�� " << t1.GetTime() << "���� ũ�ų� ����!!" << endl;
	else
		cout << t1.GetTime() << "�� " << t2.GetTime() << "���� ũ�ų� ����!!" << endl;

	return 0;
}