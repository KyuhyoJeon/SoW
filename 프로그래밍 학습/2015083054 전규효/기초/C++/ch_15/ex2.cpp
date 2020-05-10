#include "ex1.h"

Stack::Stack()
{
	top = -1;
}

bool Stack::isFull()
{
	if (top == 99)
		return true;
	else
		return false;
}

bool Stack::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

void Stack::Push(const int num)
{
	top = top + 1;
	array[top] = num;
}

int Stack::Pop()
{
	top -= 1;
	return array[top+1];
}