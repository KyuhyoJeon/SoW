#include "test10.h"

int main()
{
	Rectangle r1;

	r1.SetWidth(3.2);
	r1.SetHeight(4.3);
	cout << "* 색정보: " << r1.GetColor() << endl;
	r1.SetColor("blue");

	cout << "* 직사각형 정보 *" << endl;
	cout << "* 가  로: " << r1.GetWidth() << endl;
	cout << "* 세  로: " << r1.Getheight() << endl;
	cout << "* 면  적: " << r1.GetArea() << endl;
	cout << "* 색정보: " << r1.GetColor() << endl;

	return 0;
}