#include <iostream>
#include <string>
using namespace std;

class Person
{
	friend void TEST(Person& p);

public:
	Person();
	Person(const string name, const int age);
	string getName();
	int getAge();
	void setName(const string name);
	void setAge(const int age);
private:
	string name;
	int age;
};

Person::Person()
{
	this->name = "김수한무";
	this->age = 120;
}

Person::Person(const string name, const int age)
{
	this->name = name;
	this->age = age;
}

string Person::getName()
{
	return this->name;
}

int Person::getAge()
{
	return this->age;
}

void Person::setName(const string name)
{
	this->name = name;
}

void Person::setAge(const int age)
{
	this->age = age;
}

void TEST(Person& p)
{
	cout << p.name << endl;
	cout << p.age << endl;
	p.setAge(23);
	p.setName("이사랑");
}

int main()
{
	Person p1;
	Person* pp1 = new Person("박진영", 25);

	cout << "이름: " << pp1->getName() << endl;
	cout << "나이: " << pp1->getAge() << endl;

	delete(pp1);

	return 0;
}
