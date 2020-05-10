#include "exh.h"

int CalSecond(short int hour, short int min, short int* sec);

int CalSecond(short int hour, short int min, short int* sec)
{
	int r_sec = *sec;

	if (hour < 0 || min < 0 || sec < 0)
		return -1;

	r_sec = r_sec + hour * 60 * 60 + min * 60;
	*sec = r_sec;

	return 1;
}