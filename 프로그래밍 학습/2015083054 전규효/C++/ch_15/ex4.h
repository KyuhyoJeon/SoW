#ifndef _EX4_H_
#define _EX4_H_

#include <iostream>
#include <string>
#include "ex1.h"
using namespace std;

template<typename T>
class StackTemplate
{
public:
	StackTemplate();
	bool isFull();
	bool isEmpty();
	int Push(const T num);
	T Pop();
private:
	T array[100];
	int top;
};

template<typename T>
StackTemplate<T>::StackTemplate()
{
	top = -1;
}

template<typename T>
bool StackTemplate<T>::isFull()
{
	if (top == 99)
		return true;
	else
		return false;
}

template<typename T>
bool StackTemplate<T>::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

template<typename T>
int StackTemplate<T>::Push(const T num)
{
	if (isFull())
		return 0;

	top++;
	array[top] = num;
	
	return 1;
}

template<typename T>
T StackTemplate<T>::Pop()
{
	T popnum;

	if (isEmpty())
		return 0;

	popnum = array[top];
	top--;

	return popnum;
}

#else
#endif // !_EX4_H_