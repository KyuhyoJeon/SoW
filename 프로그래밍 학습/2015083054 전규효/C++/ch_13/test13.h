#ifndef _TEST13_H_
#define	_TEST13_H_

#include <iostream>
#include <string>
#include <iomanip>
#define HOUR_SEC 3600
#define MIN_SEC 60
using namespace std;

class Time
{
public:
	Time();
	Time(const int h, const int m, const int s);
	void SetHour(const int h);
	void SetMin(const int m);
	void SetSec(const int s);
	int GetHour();
	int GetMin();
	int GetSec();
	int CalSecond();
	string GetTime();

	bool operator<=(Time timeObj);
	bool operator>=(Time timeObj);

private:
	int hour, min, sec, allsec;
};

#else
#endif // !_TEST13_H_
