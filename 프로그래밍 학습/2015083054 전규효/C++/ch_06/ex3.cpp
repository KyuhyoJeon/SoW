#include "exh.h"

int CalTime(const int sec, short int* r_hour, short int* r_min, short int* r_sec);

int CalTime(const int sec, short int* r_hour, short int* r_min, short int* r_sec)
{
	int s_temp = sec, m_temp = 0;

	if (s_temp < 0)
		return -1;

	*r_sec = s_temp % 60;
	m_temp = s_temp / 60;
	*r_min = m_temp % 60;
	*r_hour = m_temp / 60;

	return 1;
}