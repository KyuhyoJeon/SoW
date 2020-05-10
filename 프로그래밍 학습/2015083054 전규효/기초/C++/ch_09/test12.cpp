#include <iostream>
using namespace std;

class Student
{
public:
	Student(const int s1 = 0, const int s2 = 0, const int s3 = 0);
	~Student();
	void Sum();
	int getSum();
private:
	int score1, score2, score3, sum;
};

Student::Student(const int s1, const int s2, const int s3)
	:sum(0)
{
	score1 = s1;
	score2 = s2;
	score3 = s3;
}

Student::~Student()
{
	cout << "�Ҹ��� �Դϴ�." << endl;
}

void Student::Sum()
{
	sum = score1 + score2 + score3;
}

int Student::getSum()
{
	return sum;
}

int main()
{
	Student Obj(100, 89, 96);
	Obj.Sum();
	cout << "����: " << Obj.getSum() << endl;

	Student* p_Obj = new Student(98, 76, 45);

	p_Obj->Sum();
	cout << "����: " << p_Obj->getSum() << endl;

	delete (p_Obj);

	p_Obj = &Obj;
	cout << "����: " << p_Obj->getSum() << endl;

	Student& r_Obj = Obj;
	cout << "����: " << r_Obj.getSum() << endl;

	cout << "Obj�� ũ��: " << sizeof(Obj) << endl;
	cout << "p_Obj�� ũ��: " << sizeof(p_Obj) << endl;
	cout << "r_Obj�� ũ��: " << sizeof(r_Obj) << endl;

	return 0;
}
