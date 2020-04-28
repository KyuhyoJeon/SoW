#include <iostream>
using namespace std;

int main()
{
	int x = 1, y = 1, z = 0;

	if (x > 2 && y > 2)
	{
		z = x + y;
		cout << "z = " << z << endl;
	}
	else
		cout << "x = " << x << "\n";

	return 0;
}