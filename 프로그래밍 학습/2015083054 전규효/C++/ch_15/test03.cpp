#include "test02.h"

int main()
{
	SUNG<int> intSung(90, 87, 65);

	cout << "ÃÑÁ¡: " << intSung.GetSum() << endl;
	cout << "Æò±Õ: " << intSung.GetAver() << endl;

	SUNG<double> dSung(34.6, 98.6, 88.9);

	cout << "ÃÑÁ¡: " << dSung.GetSum() << endl;
	cout << "Æò±Õ: " << dSung.GetAver() << endl;

	return 0;
}