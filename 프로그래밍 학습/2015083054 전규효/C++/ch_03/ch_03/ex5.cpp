#include <iostream>
using namespace std;

int main()
{
	int n;
	
	for (n = 0; n < 20; n++)
	{
		//if (n == 0)
		//	continue;
		//else if (n % 3 == 0 || n % 5 == 0)
		//	cout << n << endl;
		//else
		//	continue;
		if (n == 0 || (n % 3 != 0 && n % 5 != 0))
			continue;
		
		cout << n << endl;
	}

	return 0;
}