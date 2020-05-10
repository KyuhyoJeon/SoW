#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score;

	fp.open("sample.txt", ios::in | ios::binary);
	if (fp.fail())
		return 1;

	fp.read((char*)&score, 4);
	cout << setw(3) << right << score << endl;

	fp.seekg(4, ios::cur);
	fp.read((char*)&score, 4);
	cout << setw(3) << right << score << endl;

	fp.close();

	return 0;
}