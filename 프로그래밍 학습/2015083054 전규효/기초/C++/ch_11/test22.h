#ifndef _TEST22_H_
#define _TEST22_H_

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(const string name, const string addr, const string phnum);
	void SetVer(const string name, const string addr, const string phnum);
	string GetName();
	string GetAddr();
	string GetPhnum();
private:
	string name, addr, phnum;
};

class Student : public Person
{
public:
	Student();
	Student(const string name, const string addr, const string phnum, const double score1, const double score2, const double score3);
	void SetScore(const double score1, const double socre2, const double score3);
	void CalTot();
	void CalAver();
	void GetScore(double* kor, double* mus, double* art);
	double GetTot();
	double GetAver();
private:
	double score[3], tot, aver;
	int place;
};

#else
#endif // !_TEST22_H_
