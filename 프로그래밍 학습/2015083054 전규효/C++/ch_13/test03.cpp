#include "test01.h"

int main()
{
	ImaginaryNumber ima1(4.2, 5.1);
	ImaginaryNumber ima2;
	ImaginaryNumber ima3;

	ima2.SetA(7.2);
	ima2.SetB(9.6);

	ima3 = ima1.AddImaginary(ima2);

	cout << "( " << ima1.GetImaginaryNumber() << " ) + ( " << ima2.GetImaginaryNumber() << " ) = ";

	cout << ima3.GetImaginaryNumber() << endl;

	return 0;
}