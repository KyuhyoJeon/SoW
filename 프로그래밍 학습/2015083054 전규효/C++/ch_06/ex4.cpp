#include "exh.h"

int main()
{
	short int hour = 1, min = 20, sec = 32;

	cout << "����ð�: " << hour << "�� " << min << "�� " << sec << "��" << endl;

	if (CalSecond(hour, min, &sec) == 1)
		cout << "�� " << sec << endl;

	if(CalTime(sec, &hour, &min, &sec) == 1)
		cout << "����ð�: " << hour << "�� " << min << "�� " << sec << "��" << endl;


	if (CalSecond((unsigned int)hour, (unsigned int)min, (unsigned int)&sec) == 1)
		cout << "�� " << sec << endl;

	return 0;
}