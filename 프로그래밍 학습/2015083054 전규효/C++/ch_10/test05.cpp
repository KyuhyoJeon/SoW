#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "COMPUTER";
	int i;

	for (i = 0; i < (int)str.length(); i++)
		cout << i << "번째 문자: " << str.at(i) << endl;

	cout << "Programming 문자열 길이: " << str.length() << endl;
	cout << "Programming 문자열 길이: " << str.size() << endl;

	str.erase(6, 2);
	cout << "str의 erase 실행 결과: " << str << endl;

	str.assign("COMPUTER");
	cout << "문자열: " << str << endl;
	str.clear();
	cout << "문자열: " << str << endl;

	return 0;
}