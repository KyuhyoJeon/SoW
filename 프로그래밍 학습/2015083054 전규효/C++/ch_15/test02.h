#ifndef _TEST02_H_
#define _TEST02_H_

#include <iostream>
using namespace std;

template<typename T>
class SUNG
{
public:
	SUNG(const T k, const T e, const T m);
	T GetSum();
	double GetAver();
private:
	T k, e, m, sum;
	double aver;
};

template<typename T>
SUNG<T>::SUNG(const T k, const T e, const T m)
{
	this->k = k;
	this->e = e;
	this->m = m;
}

template<typename T>
T SUNG<T>::GetSum()
{
	sum = k + e + m;
	return sum;
}

template<typename T>
double SUNG<T>::GetAver()
{
	aver = sum / (double)3;
	return aver;
}

#else
#endif // !_TEST02_H_
