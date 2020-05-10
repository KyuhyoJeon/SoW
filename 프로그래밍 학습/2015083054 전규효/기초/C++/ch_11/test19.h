#ifndef _TEST19_H_
#define _TEST19_H_

#include <iostream>
using namespace std;

class CON1
{
public:
	CON1(const int c);
	~CON1();
protected:
	int c;
};

class CON2 : public CON1
{
public:
	CON2();
	~CON2();
private:
};


#else
#endif // !_TEST19_H_
