#include "ex4.h"

int main()
{
	Triangle t1;
	double b1, b2, b3;
	
	cout << "1��° ���� ����: ";
	cin >> b1;
	cout << "2��° ���� ����: ";
	cin >> b2;
	cout << "3��° ���� ����: ";
	cin >> b3;

	t1.set3Base(b1, b2, b3);
	t1.CalArea();

	cout << "�ﰢ���� �� ���� ����: " << t1.getb1() << ", " << t1.getb2() << ", " << t1.getb3() << endl;
	cout << "�ﰢ���� ����: " << t1.getArea() << endl;

	return 0;
}