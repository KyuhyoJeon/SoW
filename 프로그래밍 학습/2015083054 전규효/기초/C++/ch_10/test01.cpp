#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s_name;

	s_name = "문자열";

	cout << s_name << endl;

	cout << "문자열 길이: " << s_name.length() << endl;

	s_name = s_name + "클래스";
	//s_name.append("클래스");

	cout << s_name << endl;
	cout << "문자열 길이: " << s_name.length() << endl;

	return 0;
}