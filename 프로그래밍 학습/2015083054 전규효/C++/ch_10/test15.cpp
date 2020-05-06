#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score[5] = { 78, 96, 100, 25, 96 };

	fp.open("sample.txt", ios::out | ios::binary);
	fp.write((char*)score, 20);
	fp.close();

	return 0;
}