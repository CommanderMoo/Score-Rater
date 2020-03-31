//Score Rater
#include <iostream>
using namespace std;
int main()
{
	if (true)
	{
		cout << "This is always displayed. \n\n";
	}
	if(false)
	{
		cout << "This is never displayed. \n\n";
	}
	int score = 1000;
	if (score)
	{
		cout << "At least you didn't score zero. \n\n";
	}
	if (score >= 250)
	{
		cout << "You scored 250 or more. Decent. \n\n";
	}
	if (score >= 500)
	{
		cout << "You score 500 or more. Nice. \n\n";
		if (score >= 1000)
		{
			cout << "You scored 1000 or more, Impressive! \n";
		}
		return 0;
	}
}

void rater(int)
{
	//Score Rater 2
	int scores;
	cout << "Enter your score: ";
	cin >> scores;

	if (scores > 1000)
	{
		cout << "You scored 1000 or more. Impressive! \n";
	}
	else
	{
		cout << "You scored less then 1000. \n";
	}
	//return 0;
}

void triple(int)
{
	int scorez;
	cout << "Enter your score: ";
	cin >> scorez;

	if (scorez >= 1000)
	{
		cout << "You scored 1000 or more. Impressive! \n";
	}
	else if (scorez >= 500)
	{
		cout << "You scored 500 or more. Nice. \n";
	}
	else if (scorez >= 250)
	{
		cout << "You scored 250 or more. Decent. \n";
	}
	else
	{
		cout << "You scored less then 250. Nothing to brag about. \n";
	}
	//return 0;
}

void chooser(int)
{
	cout << "Difficulty Levels \n\n";
	cout << "1 - Easy \n";
	cout << "2 - Normal \n";
	cout << "3 - Hard \n\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice)
	{
		case1:
			cout << "You picked Easy. \n";
			break;
		case2:
			cout << "You picked NormaL. \n";
			break;
		case3:
			cout << "You picked Easy. \n";
			break;
	default:
		cout << "You made an illegal choice. \n";

		//return 0;
	}
}