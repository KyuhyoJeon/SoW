#include <iostream>
using namespace std;

int main()
{
	int jumsu1, jumsu2, jumsu3;
	int score[3];
	int* addr;

	cout << "jumsu1狼 林家: " << &jumsu1 << endl;
	cout << "jumsu2狼 林家: " << &jumsu2 << endl;
	cout << "jumsu3狼 林家: " << &jumsu3 << endl;

	cout << "*****************************" << endl;

	cout << "score[0]狼 林家: " << &score[0] << endl;
	cout << "score[1]狼 林家: " << &score[1] << endl;
	cout << "score[2]狼 林家: " << &score[2] << endl;

	cout << "*****************************" << endl;

	for (int i = 0; i < 3; i++)
		cout << "score[" << i << "]狼 林家: " << &score[i] << endl;

	return 0;
}