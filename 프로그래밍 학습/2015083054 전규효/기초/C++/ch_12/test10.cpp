#include "test06.h"

void DisplayGeometricObject(GeometricObject& object)
{
	double line1, line2;
	object.GetLines(&line1, &line2);
	cout << "line1: " << line1 << endl;
	cout << "line2: " << line2 << endl;

	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*>(p);
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);

	if (p1 != NULL)
	{
		p1->AreaCalculation();
		p1->RoundCalculation();

		cout << "이등변 삼각형의 넓이: " << p1->GetArea() << endl;
		cout << "이등변 삼각형의 등변: " << p1->GetSide() << endl;
	}

	if (p2 != NULL)
	{
		p2->AreaCalculation();
		p2->RoundCalculation();

		cout << "사각형의 넓이: " << p2->GetArea() << endl;
		cout << "사각형의 둘레: " << p2->GetRound() << endl;
	}
}

int main()
{
	Isosceles p1(9, 15);
	Rectangle p2(10, 12);

	DisplayGeometricObject(p1);

	cout << "********************************" << endl;

	DisplayGeometricObject(p2);

	return 0;
}