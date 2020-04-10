#include <iostream>
#include <string>

using namespace std;

//Function Declarations

void askUserName(string&);
//askUserName - Sets name of user
//@param string& - name of user

int askUserScore();
// askUserScore - sets credit score of user
//@param int - credit score of user

void print(string, int);
// print - prints whether user is in good standing
// @param string - name of user
// @param int - credit score of user

int main()
{

	string name;

	askUserName(name);

	print(name, askUserScore());

	return 0;
}

//Function Definitions

void askUserName(string& newName)
{
	cout << "Enter your name: ";
	cin >> newName;

	cout << endl;
}

int askUserScore()
{
	int score;
	cout << "Enter credit score: ";
	cin >> score;
	cout << endl;

	return score;
}

void print(string newName, int newScore)
{
	if (newScore >= 740)
	{
		cout << endl << newName << " is are in good standing!" << endl;
	}
	else if (newScore >= 600)
	{
		cout << endl << newName << " is in questionable standing." << endl;
	}
	else
	{
		cout << endl << newName << " is not in good standing." << endl;
	}
}