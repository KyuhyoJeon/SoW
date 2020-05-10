#include "test07.h"

int main()
{
	A Obj_A;

	Obj_A.SetVar(10, 20);
	Obj_A.ShowVar();
	
	cout << "*****************************" << endl;

	B Obj_B;

	Obj_B.SetVar(30, 40);
	Obj_B.ShowVar();
	Obj_B.Show();

	return 0;
}