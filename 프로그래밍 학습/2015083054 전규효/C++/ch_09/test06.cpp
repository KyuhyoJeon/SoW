#include "test04.h"

int main()
{
	Student p1;

	p1.setScore(99, 93, 89);
	p1.SumAverage();
	p1.ShowScore();

	cout << "*************************************" << endl;

	Student p2(80, 56, 100);
	p2.SumAverage();
	p2.ShowScore();

	return 0;
}