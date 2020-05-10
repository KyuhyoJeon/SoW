#include <iostream>
#include <string>
using namespace std;

int main()
{
	string course = "Computer!!!";
	int i;
	char ch;

	cout << "문자열: " << course << endl;
	cout << "길  이: " << course.length() << endl;

	for (i = 0; i < course.length(); i++)
	{
		ch = course.at(i);
		if (ch >= 'a' && ch <= 'z')
			ch = ch - ('a' - 'A');
		else if (ch >= 'A' && ch <= 'Z')
			ch = ch + ('a' - 'A');
		else
			;
		cout << ch;
	}

	cout << endl;

	return 0;
}