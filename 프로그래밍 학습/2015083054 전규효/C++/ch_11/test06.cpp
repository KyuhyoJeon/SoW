#include "test04.h"

int main()
{
	StringCharArray one;

	char t_str[50];

	one.assign("sample");
	one.toCharArray(t_str);

	cout << one << endl;
	cout << one[0] << endl;
	cout << t_str << endl;

	return 0;
}