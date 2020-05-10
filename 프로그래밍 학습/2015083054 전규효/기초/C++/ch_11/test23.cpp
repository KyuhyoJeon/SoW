#include "test22.h"

Person::Person()
{
	this->name = " ";
	this->addr = " ";
	this->phnum = " ";
}

Person::Person(const string name, const string addr, const string phnum)
{
	this->name = name;
	this->addr = addr;
	this->phnum = phnum;
}

void Person::SetVer(const string name, const string addr, const string phnum)
{
	this->name = name;
	this->addr = addr;
	this->phnum = phnum;
}

string Person::GetName()
{
	return name;
}

string Person::GetAddr()
{
	return addr;
}

string Person::GetPhnum()
{
	return phnum;
}

Student::Student()
	: Person(" ", " ", " ")
{
	for (int i = 0; i < 3; i++)
		this->score[i] = 0;
}

Student::Student(const string name, const string addr, const string phnum, const double score1, const double score2, const double score3)
	: Person(name, addr, phnum)
{
	this->score[0] = score1;
	this->score[1] = score2;
	this->score[2] = score3;
	tot = 0;
	aver = 0;
	place = 0;
}

void Student::SetScore(const double score1, const double score2, const double score3)
{
	this->score[0] = score1;
	this->score[1] = score2;
	this->score[2] = score3;
	tot = 0;
	aver = 0;
	place = 0;
}

void Student::CalTot()
{
	for (int i = 0; i < 3; i++)
		tot = tot + score[i];
	aver = tot / 3;
}

void Student::CalAver()
{
	aver = tot / 3;
}

void Student::GetScore(double* kor, double* mus, double* art)
{
	*kor = score[0];
	*mus = score[1];
	*art = score[2];
	tot = 0;
	aver = 0;
	place = 0;
}

double Student::GetTot()
{
	return tot;
}

double Student::GetAver()
{
	return aver;
}