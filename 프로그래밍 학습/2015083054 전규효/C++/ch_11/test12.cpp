#include "test10.h"

int main()
{
	GeometricFigure obj1;

	cout << "obj1�� ��: " << obj1.GetColor() << endl;
	obj1.SetColor("green");
	cout << "obj1�� ��: " << obj1.GetColor() << endl;

	return 0;
}