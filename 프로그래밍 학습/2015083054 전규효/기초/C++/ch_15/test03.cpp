#include "test02.h"

int main()
{
	SUNG<int> intSung(90, 87, 65);

	cout << "����: " << intSung.GetSum() << endl;
	cout << "���: " << intSung.GetAver() << endl;

	SUNG<double> dSung(34.6, 98.6, 88.9);

	cout << "����: " << dSung.GetSum() << endl;
	cout << "���: " << dSung.GetAver() << endl;

	return 0;
}