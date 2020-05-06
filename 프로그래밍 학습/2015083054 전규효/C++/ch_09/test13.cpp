#include <iostream>
using namespace std;

class Sample
{
public:
	void setScore(const int score);
	int getScore();
private:
	int score;
};

void Sample::setScore(const int score)
{
	this->score = score;
}

int Sample::getScore()
{
	return score;
}

int main()
{
	Sample Sam;
	Sam.setScore(100);

	cout << Sam.getScore() << endl;


	return 0;
}