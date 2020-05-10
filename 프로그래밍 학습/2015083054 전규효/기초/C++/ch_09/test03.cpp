#include "test01.h"

int main()
{
	Student p1;

	p1.ShowScore();

	cout << "*************************************" << endl;

	p1.setScore(99, 93, 89);
	p1.SumAverage();
	p1.ShowScore();

	return 0;
}