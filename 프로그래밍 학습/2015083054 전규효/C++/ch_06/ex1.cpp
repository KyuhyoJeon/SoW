#include "exh.h"

int CalSecond(unsigned int hour, unsigned int min, unsigned int sec);

int CalSecond(unsigned int hour, unsigned int min, unsigned int sec)
{
	return ((hour * 60 * 60) + (min * 60) + sec);
}