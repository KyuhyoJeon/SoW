#include <iostream>
using namespace std;

int main()
{
	int loan, month;
	double interest=0.025, inter;

	cout << "������� �ݾ�: ";
	cin >> loan;

	month = loan / 12;
	inter = month * interest;

	month = month + inter;

	for (int i = 0; i < 12; i++)
		cout << i+1 << "��° �� ���� �ݾ�: " << month << "��" << endl;

	return 0;
}