#include <iostream>
using namespace std;

int main()
{
	int loan, month;
	double interest=0.025, inter;

	cout << "대출받은 금액: ";
	cin >> loan;

	month = loan / 12;
	inter = month * interest;

	month = month + inter;

	for (int i = 0; i < 12; i++)
		cout << i+1 << "번째 달 납부 금액: " << month << "원" << endl;

	return 0;
}