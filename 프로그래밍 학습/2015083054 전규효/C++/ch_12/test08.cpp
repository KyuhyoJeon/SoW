#include "test06.h"

int main()
{
	double l1, l2;
	Isosceles i(4.2, 5.4);
	Rectangle r(20.1, 12);

	i.AreaCalculation();
	i.RoundCalculation();

	r.AreaCalculation();
	r.RoundCalculation();

	i.GetLines(&l1, &l2);

	cout << "삼각형의 밑변: " << l1 << endl;
	cout << "삼각형의 높이: " << l2 << endl;
	cout << "넓이: " << i.GetArea() << endl;
	cout << "등변: " << i.GetSide() << endl;

	r.GetLines(&l1, &l2);

	cout << "사각형의 너비: " << l1 << endl;
	cout << "사각형의 높이: " << l2 << endl;
	cout << "넓이: " << r.GetArea() << endl;
	cout << "둘레: " << r.GetRound() << endl;

	return 0;
}