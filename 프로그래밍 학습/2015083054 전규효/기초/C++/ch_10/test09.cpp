#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Computer", str2 = "Science";
	int i;

	for (i = 0; i < (int)str1.length(); i++)
		cout << str1[i] << endl;

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;

	str1 = str1 + "-" + str2;

	cout << "************************" << endl;
	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;

	if (str1 > str2)
		cout << str1 << endl;
	else
		cout << str2 << endl;

	return 0;
}