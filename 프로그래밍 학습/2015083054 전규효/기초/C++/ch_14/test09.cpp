#include "test07.h"

int main()
{
	try
	{
		Sung p1(10, 30, -10);
		cout << "ÃÑÁ¡: " << p1.GetTotal() << endl;
		cout << "Æò±Õ: " << p1.GetAver() << endl;
	}
	catch (SungException& e)
	{
		cout << e.what() << endl;
		cout << "Àü´ÞµÈ ÃÑÁ¡: " << e.GetTotal() << endl;
		cout << "Àü´ÞµÈ °ú¸ñ ¼ö: " << e.GetNum() << endl;
	}

	return 0;
}