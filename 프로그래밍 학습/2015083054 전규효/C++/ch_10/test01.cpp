#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s_name;

	s_name = "���ڿ�";

	cout << s_name << endl;

	cout << "���ڿ� ����: " << s_name.length() << endl;

	s_name = s_name + "Ŭ����";
	//s_name.append("Ŭ����");

	cout << s_name << endl;
	cout << "���ڿ� ����: " << s_name.length() << endl;

	return 0;
}