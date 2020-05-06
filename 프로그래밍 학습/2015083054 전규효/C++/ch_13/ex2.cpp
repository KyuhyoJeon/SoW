#include <iostream>
#define PI 3.141592
using namespace std;

class Circle
{
public:
	Circle(const double radius);
	double GetRadius();
	double GetArea();
	double GetCir();

	bool Compare(Circle obj);
private:
	double radius;
};

Circle::Circle(const double radius)
{
	this->radius = radius;
}

double Circle::GetRadius()
{
	return radius;
}

double Circle::GetArea()
{
	return PI * radius * radius;
}

double Circle::GetCir()
{
	return 2 * PI * radius;
}

bool Circle::Compare(Circle obj)
{
	if (this->radius >= obj.radius)
		return true;
	else
		return false;
}

int main()
{
	Circle c1(39.2), c2(13.2);

	cout << "반지름: " << c1.GetRadius() << endl;
	cout << "원 면적: " << c1.GetArea() << endl;
	cout << "반지름: " << c2.GetRadius() << endl;
	cout << "원 면적: " << c2.GetArea() << endl;

	if (c1.Compare(c2))
		cout << "객체 c1이 c2보다 크다." << endl;
	else
		cout << "객체 c2이 c1보다 크다." << endl;

	return 1;
}