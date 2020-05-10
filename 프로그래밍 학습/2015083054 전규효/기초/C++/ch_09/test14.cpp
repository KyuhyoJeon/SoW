#include <iostream>
using namespace std;

int CheckTax(const double Income, double& Tax);

class SaleInf
{
public: 
	SaleInf(const double Income);
	double getTax();
private:
	double Income;
	double Tax;
};

SaleInf::SaleInf(const double Income)
{
	this->Income = Income;
}

double SaleInf::getTax()
{
	CheckTax(Income, Tax);

	return Tax;
}

int CheckTax(const double Income, double& Tax)
{
	if (Income <= 0)
		return 0;

	Tax = 0.03 * Income;
	return 1;
}

int main()
{
	SaleInf s1(20.4);
	cout << "����: " << s1.getTax() << endl;

	double income = 20.4, tax;
	CheckTax(income, tax);

	cout << "����: " << tax << endl;

	return 0;
}