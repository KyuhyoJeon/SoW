#include "test10.h"

int main()
{
	Rectangle r1;

	r1.SetWidth(3.2);
	r1.SetHeight(4.3);
	cout << "* ������: " << r1.GetColor() << endl;
	r1.SetColor("blue");

	cout << "* ���簢�� ���� *" << endl;
	cout << "* ��  ��: " << r1.GetWidth() << endl;
	cout << "* ��  ��: " << r1.Getheight() << endl;
	cout << "* ��  ��: " << r1.GetArea() << endl;
	cout << "* ������: " << r1.GetColor() << endl;

	return 0;
}