#include <iostream>
using namespace std;

int main()
{
	int score;
	char grade;
	do {								// score������ ������ �Է¹ް�,
		cout << "���� �Է�: ";			// �Է¹��� ���� 100�� �Ѱų� 
		cin >> score;					// 0���� ���ٸ� �ٽ� �Է¹޴´�.
	} while (score > 100 || score < 0);	

	/*switch (score / 10) {
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	} */
	
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';
	
	cout << "grade = " << grade << "\n";

	return 0;
}