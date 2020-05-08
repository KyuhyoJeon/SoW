#ifndef _EX1_H_
#define _EX1_H_

#include <iostream>
using namespace std;

class Stack
{
public:
	Stack();
	bool isFull();
	bool isEmpty();
	void Push(const int num);
	int Pop();
private:
	int array[100], top;
};

#else
#endif // !_EX1_H_
