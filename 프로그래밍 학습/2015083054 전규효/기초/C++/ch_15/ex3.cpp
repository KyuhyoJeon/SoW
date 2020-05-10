#include "ex1.h"
#include "ex4.h"

int main()
{
	Stack s1;

	s1.Push(100);
	s1.Push(200);
	s1.Push(300);

	for (; !s1.isEmpty();)
		cout << s1.Pop() << "   ";
	cout << endl;

	StackTemplate<string> s2;

	s2.Push("채치수");
	s2.Push("강백호");
	s2.Push("정대만");

	for (; !s2.isEmpty();)
		cout << s2.Pop() << "   ";

	cout << endl;

	StackTemplate<double> s3;

	s3.Push(13.4);
	s3.Push(54.2);
	s3.Push(87.8);

	for (; !s3.isEmpty();)
		cout << s3.Pop() << "   ";

	cout << endl;
	
	return 0;
}