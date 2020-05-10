#include "test07.h"

Student::Student(const int s1, const int s2, const int s3)
	: sum(0), average(0)
{
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
}

void Student::setScore(const int s1, const int s2, const int s3)
{
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
}

void Student::SumAverage()
{
	int i;

	for (i = 0; i < 3; i++)
		sum = sum + score[i];

	average = sum / 3.;
}

void Student::ShowScore()
{
	int i;

	for (i = 0; i < 3; i++)
		cout << "�� ��" << i + 1 << ": " << score[i] << endl;

	cout << "��  ��: " << sum << endl;
	cout << "��  ��: " << average << endl;
}