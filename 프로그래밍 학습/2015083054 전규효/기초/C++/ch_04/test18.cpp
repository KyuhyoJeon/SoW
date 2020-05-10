#include <iostream>
using namespace std;

int main()
{
	char s_string[100] = "C++ programming is very interesting!!!";
	char d_string[100];

	cout << "s_string = " << s_string << endl;
	
	strcpy_s(d_string, _countof(d_string), s_string);
	cout << "d_string = " << d_string << endl;

	strncpy_s(d_string, _countof(d_string), s_string, 3);
	cout << "d_string = " << d_string << endl;

	strcat_s(d_string, _countof(d_string), "*****");
	cout << "d_string = " << d_string << endl;

	strncat_s(d_string, _countof(d_string), s_string, 3);
	cout << "d_string = " << d_string << endl;

	return 0;
}