#include <iostream>
using namespace std;

class SaleInf
{
	friend int CheckTax2(SaleInf& Obj);

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
	return Tax;
}

int CheckTax2(SaleInf& Obj)
{
	if (Obj.Income <= 0)
		return 0;

	Obj.Tax = Obj.Income * 0.03;
	return 1;
}

int main()
{
	SaleInf s1(20.4);
	CheckTax2(s1);

	cout << "¼¼±Ý: " << s1.getTax() << endl;

	return 0;
}