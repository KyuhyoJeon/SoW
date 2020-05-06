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

	cout << "�ﰢ��1�� ��: " << color << endl;
	cout << "�ﰢ��1�� ��1: " << side1 << endl;
	cout << "�ﰢ��1�� ��2: " << side2 << endl;
	cout << "�ﰢ��1�� ��3: " << side3 << endl;
	cout << "�ﰢ��1�� ����: " << area << endl;

	Triangle t2("blue", 3.2, 5.5, 4.8);
	t2.CalArea();
	
	color = t2.GetColor();
	t2.GetSides(&side1, &side2, &side3);
	area = t2.GetArea();

	cout << "�ﰢ��2�� ��: " << color << endl;
	cout << "�ﰢ��2�� ��1: " << side1 << endl;
	cout << "�ﰢ��2�� ��2: " << side2 << endl;
	cout << "�ﰢ��2�� ��3: " << side3 << endl;
	cout << "�ﰢ��2�� ����: " << area << endl;

	return 0;
}