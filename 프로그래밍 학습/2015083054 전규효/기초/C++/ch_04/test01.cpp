#include <iostream>
using namespace std;

int main()
{
	int sum, i;

	for (i = 0; i <= 10; i++)
		sum = sum + i;

	cout << "1부터 10까지의 합" << sum << endl;

	return 0;
}