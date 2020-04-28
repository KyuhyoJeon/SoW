#include <iostream>
using namespace std;

int main()
{
	int i, j;

	for (i = 1; i <= 2; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			cout << "i = " << i << "    ";
			cout << "j = " << j << endl;
		}

		cout << "******************" << endl;
	}

	return 0;
}