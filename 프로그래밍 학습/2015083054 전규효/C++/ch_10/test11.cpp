#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;
	char cont = 'y';
	char word[50] = { 0, };

	output.open("test.txt");

	if (output.fail())
		return 1;

	while (cont == 'y' || cont == 'Y')
	{
		cout << "단어 입력: ";
		cin >> word;

		output << word << " ";

		cout << "계속하시겠습니까? (y/n) ";
		cin >> cont;
	}

	output.close();

	return 0;
}