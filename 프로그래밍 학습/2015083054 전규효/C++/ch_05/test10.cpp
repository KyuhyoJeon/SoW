#include "test09.h"

int main()
{
	ITEM a;
	int temp;

	cout << "Month狼 林家: " << &a.Month << endl;
	cout << "Day狼 林家: " << &a.Day << endl;

	temp = (int)a.ItemName;

	cout << "ItemNum狼 林家: " << setiosflags(ios::uppercase) << setfill('0') << setw(8) << hex << temp << endl;
	cout << "Quantity狼 林家: " << &a.Quantity << endl;
	cout << "UnitCost狼 林家: " << &a.UnitCost << endl;
	cout << "Price狼 林家: " << &a.Price << endl;

	return 0;
}