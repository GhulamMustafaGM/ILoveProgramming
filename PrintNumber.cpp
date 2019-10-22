#include<iostream>
using namespace std;

int main()
{
	int GameNumber;

	cout << "\nGuess a GameNumber : ";
	cin >> GameNumber;

	if (GameNumber > 15 && GameNumber < 120)
	{
		cout << "What's in your mind!" << endl;
	}
	else
	{
		cout << "Opps.. " << endl;
	}

	return 0;
}
