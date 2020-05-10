#include "ex3.h"

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
		OneLine[len].aver = OneLine[len].sum / 3.;
	}

	for (i = 0; i < len; i++)
		cout << "ÃÑÁ¡: " << OneLine[i].sum << " Æò±Õ: " << OneLine[i].aver << endl;

	fp.close();

	return 0;
}