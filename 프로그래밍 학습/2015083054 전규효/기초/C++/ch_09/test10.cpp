#include <iostream>
using namespace std;

class CopyObj
{
public:
	CopyObj(const double height, const double weight);
	void ShowVar();
private:
	double height;
	double weight;
};

CopyObj::CopyObj(const double height, const double weight)
{
	this->height = height;
	this->weight = weight;
}

void CopyObj::ShowVar()
{
	cout << "Å°: " << height << endl;
	cout << "¸ö¹«°Ô: " << weight << endl;
}

int main()
{
	CopyObj p1(181.5, 79.3);
	p1.ShowVar();

	cout << "******************************************" << endl;

	CopyObj p2(p1);
	p2.ShowVar();

	return 0;
}