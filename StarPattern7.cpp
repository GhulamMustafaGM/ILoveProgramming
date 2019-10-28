// StartPattern7

#include<iostream>
using namespace std;

int main()
{
	int a, space, rowsNumber, n = 0;

	cout << "\nEnter the number of rows: ";
	cin >> rowsNumber;

	for (a = 1; a <= rowsNumber; a++)
	{
		for (space = 1; space <= (rowsNumber - a); space++)
		{
			cout << "  ";
		}
		while (n != (2 * a - 1))
		{
			cout << "* ";
			n++;
		}
		n = 0;
		cout << endl;
	}
	return 0;
    
}