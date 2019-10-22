// Play robot game

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char robMachine[20];

	cout << "\nAre you a Robot machine ? "; // Choose yes or no
	cin >> robMachine;

	int k = strcmp("yes", robMachine);
	if (k == 0)
	{
		cout << "Sorry!.. You cant't proceed." << endl;
	}
	else
	{
		cout << "Congrats!.. You can proceed. " << endl;
	}
	return 0;
}