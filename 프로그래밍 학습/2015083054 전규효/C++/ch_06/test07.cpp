#include <iostream>
using namespace std;

int main()
{
	cout << "******************" << endl;

#ifdef TEST
	cout << "TESTTESTTESTTEST" << endl;
#else
	cout << "******************" << endl;
#endif

	return 0;
}