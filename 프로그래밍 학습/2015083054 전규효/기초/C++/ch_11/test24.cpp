#include "test22.h"

int main()
{
	string name, addr, phnum;
	double kor, mus, art;
	ofstream output;
	Student stu1;

	cout << "�̸� �Է�: ";
	cin >> name;
	cout << "�ּ� �Է�: ";
	cin >> addr;
	cout << "��ȣ �Է�: ";
	cin >> phnum;

	cout << "���� ����: ";
	cin >> kor;
	cout << "���� ����: ";
	cin >> mus;
	cout << "�̼� ����: ";
	cin >> art;	

	stu1.SetVer(name, addr, phnum);
	stu1.SetScore(kor, mus, art);
	stu1.CalTot();
	stu1.CalAver();

	Student stu2("äġ��", "�ϻ絿", "010-2222-3333", 100, 99, 94);

	stu2.CalTot();
	stu2.CalAver();

	output.open("data.txt");
	stu1.GetScore(&kor, &mus, &art);
	stu1.CalTot();
	stu1.CalAver();
	output << stu1.GetName() << " " << kor << " " << mus << " " << art << " " << stu1.GetTot() << " " << stu1.GetAver() << endl;

	stu2.GetScore(&kor, &mus, &art);
	stu2.CalTot();
	stu2.CalAver();
	output << stu2.GetName() << " " << kor << " " << mus << " " << art << " " << stu2.GetTot() << " " << stu2.GetAver() << endl;

	return 0;
}