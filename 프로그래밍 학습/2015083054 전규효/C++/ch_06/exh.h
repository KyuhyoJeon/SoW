#ifndef _EXH_H_
#define _EXH_H_

#include <iostream>
using namespace std;

int CalSecond(unsigned int hour, unsigned int min, unsigned int sec);
int CalSecond(short int hour, short int min, short int* sec);
int CalTime(const int sec, short int* r_hour, short int* r_min, short int* r_sec);

#else
#endif // !_EXH_H_
