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

	cout << "�ﰢ���� �غ�: " << l1 << endl;
	cout << "�ﰢ���� ����: " << l2 << endl;
	cout << "����: " << i.GetArea() << endl;
	cout << "�: " << i.GetSide() << endl;

	r.GetLines(&l1, &l2);

	cout << "�簢���� �ʺ�: " << l1 << endl;
	cout << "�簢���� ����: " << l2 << endl;
	cout << "����: " << r.GetArea() << endl;
	cout << "�ѷ�: " << r.GetRound() << endl;

	return 0;
}