#include <iostream>
using namespace std;

int main()
{
	int height, weight;
	float std_weight;

	cout << "Ű �Է�: ";
	cin >> height;

	cout << "������ �Է�: ";
	cin >> weight;

	std_weight = (height - 100) * 0.9f;
	
	cout << "ǥ�� ������: " << std_weight << endl;

	if (weight < (std_weight * 0.9f))
		cout << "��ü���Դϴ�." << endl;
	else if (weight > (std_weight * 1.2))
		cout << "��ü���Դϴ�." << endl;
	else
		cout << "����ü���Դϴ�." << endl;

	return 0;
}