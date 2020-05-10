#include "test13.h"

int main()
{
	Time t1(7, 30, 20);

	cout << t1.GetTime() << endl;
	cout << "시간 - 초 단위: " << t1.CalSecond() << endl;

	Time t2(4, 50, 23);

	if (t1 >= t2)
		cout << t1.GetTime() << "가 " << t2.GetTime() << "보다 크거나 같다!!" << endl;
	else
		cout << t2.GetTime() << "가 " << t1.GetTime() << "보다 크거나 같다!!" << endl;

	if (t1 <= t2)
		cout << t2.GetTime() << "가 " << t1.GetTime() << "보다 크거나 같다!!" << endl;
	else
		cout << t1.GetTime() << "가 " << t2.GetTime() << "보다 크거나 같다!!" << endl;

	return 0;
}