#include "ex1.h"

int main()
{
	Triangle t1;
	double side1, side2, side3, area;
	string color;

	t1.SetColor("pink");
	t1.SetSides(3.4, 5.1, 4.2);
	t1.CalArea();

	color = t1.GetColor();
	t1.GetSides(&side1, &side2, &side3);
	area = t1.GetArea();

	cout << "»ï°¢Çü1ÀÇ »ö: " << color << endl;
	cout << "»ï°¢Çü1ÀÇ ¸é1: " << side1 << endl;
	cout << "»ï°¢Çü1ÀÇ ¸é2: " << side2 << endl;
	cout << "»ï°¢Çü1ÀÇ ¸é3: " << side3 << endl;
	cout << "»ï°¢Çü1ÀÇ ¸éÀû: " << area << endl;

	Triangle t2("blue", 3.2, 5.5, 4.8);
	t2.CalArea();
	
	color = t2.GetColor();
	t2.GetSides(&side1, &side2, &side3);
	area = t2.GetArea();

	cout << "»ï°¢Çü2ÀÇ »ö: " << color << endl;
	cout << "»ï°¢Çü2ÀÇ ¸é1: " << side1 << endl;
	cout << "»ï°¢Çü2ÀÇ ¸é2: " << side2 << endl;
	cout << "»ï°¢Çü2ÀÇ ¸é3: " << side3 << endl;
	cout << "»ï°¢Çü2ÀÇ ¸éÀû: " << area << endl;

	return 0;
}