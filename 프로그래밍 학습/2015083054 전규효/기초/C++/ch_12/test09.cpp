#include "test06.h"

int main()
{
	double l1, l2;
	
	GeometricObject* p1 = new Isosceles(9, 15);

	Isosceles* p2 = new Isosceles(5, 6);

	p1->GetLines(&l1, &l2);
	cout << "p1: " << l1 << endl;
	p2->GetLines(&l1, &l2);
	cout << "p2: " << l1 << endl;

	return 0;
}