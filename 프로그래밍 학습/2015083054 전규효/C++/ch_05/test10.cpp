#include "test09.h"

int main()
{
	ITEM a;
	int temp;

	cout << "Month�� �ּ�: " << &a.Month << endl;
	cout << "Day�� �ּ�: " << &a.Day << endl;

	temp = (int)a.ItemName;

	cout << "ItemNum�� �ּ�: " << setiosflags(ios::uppercase) << setfill('0') << setw(8) << hex << temp << endl;
	cout << "Quantity�� �ּ�: " << &a.Quantity << endl;
	cout << "UnitCost�� �ּ�: " << &a.UnitCost << endl;
	cout << "Price�� �ּ�: " << &a.Price << endl;

	return 0;
}