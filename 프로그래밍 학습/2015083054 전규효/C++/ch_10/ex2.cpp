#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define MAX 50

typedef struct 
{
	string name;
	int score[3];
	int sum;
	double aver;
}OneStudent;

int main()
{
	string fn = "sung.txt";
	OneStudent OneLine[MAX];
	int i, len;
	fstream fp;

	fp.open(fn, ios::in);

	if (fp.fail())
		return 1;

	for (len = 0; !fp.eof(); len++)
	{
		fp >> OneLine[len].name;
		OneLine[len].sum = 0;
		for (i = 0; i < 3; i++)
		{
			fp >> OneLine[len].score[i];
			OneLine[len].sum = OneLine[len].sum + OneLine[len].score[i];
		}
		OneLine[len].aver = OneLine[len].sum / (double)3;
	}

	for (i = 0; i < len; i++)
		cout << "ÃÑÁ¡: " << OneLine[i].sum << " Æò±Õ: " << OneLine[i].aver << endl;

	fp.close();

	return 0;
}