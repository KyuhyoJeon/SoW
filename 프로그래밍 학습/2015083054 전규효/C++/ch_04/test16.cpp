#include <iostream>
using namespace std;

int main()
{
	char string1[30] = { 0, }, string2[30] = { 0, };
	int i = 0;

	cout << "���ڿ� �Է�: ";
	cin >> string1;

	for (i = 0; string1[i] != '\0'; i++)
		string2[i] = string1[i];
	string2[i] = string1[i];

	cout << string2 << endl;
	cout << string1 << endl;

	return 0;
}