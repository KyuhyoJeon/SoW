#include <iostream>
using namespace std;

int main()
{
	char ch = 'y', name[30] = "KabDol";

	cout << &ch << endl;
	cout << name << endl;
	cout << &name[0] << endl;

	return 0;
}