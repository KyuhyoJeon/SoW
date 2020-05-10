#include "exh.h"

int main()
{
	short int hour = 1, min = 20, sec = 32;

	cout << "현재시간: " << hour << "시 " << min << "분 " << sec << "초" << endl;

	if (CalSecond(hour, min, &sec) == 1)
		cout << "총 " << sec << endl;

	if(CalTime(sec, &hour, &min, &sec) == 1)
		cout << "현재시간: " << hour << "시 " << min << "분 " << sec << "초" << endl;


	if (CalSecond((unsigned int)hour, (unsigned int)min, (unsigned int)&sec) == 1)
		cout << "총 " << sec << endl;

	return 0;
}