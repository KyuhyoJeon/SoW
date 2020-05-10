#include "test13.h"

Time::Time()
{
	hour = 0;
	min = 0;
	sec = 0;
	allsec = 0;
}

Time::Time(const int h, const int m, const int s)
{
	hour = h;
	min = m;
	sec = s;
}

void Time::SetHour(const int h)
{
	hour = h;
}

void Time::SetMin(const int m)
{
	min = m;
}

void Time::SetSec(const int s)
{
	sec = s;
}

int Time::GetHour()
{
	return hour;
}

int Time::GetMin()
{
	return min;
}

int Time::GetSec()
{
	return sec;
}

int Time::CalSecond()
{
	allsec = hour * HOUR_SEC + min * MIN_SEC + sec;

	return allsec;
}

string Time::GetTime()
{
	char c_hour[50] = { 0, }, c_min[50] = { 0, }, c_sec[50] = { 0, };

	_itoa_s(hour, c_hour, 50, 10);
	_itoa_s(min, c_min, 50, 10);
	_itoa_s(sec, c_sec, 50, 10);

	strcat_s(c_hour, 50, "Ω√ ");
	strcat_s(c_min, 50, "∫– ");
	strcat_s(c_sec, 50, "√  ");

	strcat_s(c_hour, 50, c_min);
	strcat_s(c_hour, 50, c_sec);

	return string(c_hour);
}

bool Time::operator<=(Time timeObj)
{
	this->CalSecond();
	timeObj.CalSecond();

	if (this->sec <= timeObj.allsec)
		return true;
	else
		return false;
}

bool Time::operator>=(Time timeObj)
{
	this->CalSecond();
	timeObj.CalSecond();

	if (this->sec >= timeObj.allsec)
		return true;
	else
		return false;
}