#include "ex4.h"

int main()
{
	Triangle t1;
	double b1, b2, b3;
	
	cout << "1번째 변의 길이: ";
	cin >> b1;
	cout << "2번째 변의 길이: ";
	cin >> b2;
	cout << "3번째 변의 길이: ";
	cin >> b3;

	t1.set3Base(b1, b2, b3);
	t1.CalArea();

	cout << "삼각형의 세 변의 길이: " << t1.getb1() << ", " << t1.getb2() << ", " << t1.getb3() << endl;
	cout << "삼각형의 넓이: " << t1.getArea() << endl;

	return 0;
}