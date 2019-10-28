// StarPattern16

#include<iostream>
using namespace std;

int main()
{
int number, c1, k1, space1 = 1;
	
	cout << "Enter number of rows (for diamond dimension) : ";
	cin >> number;
	
	space1 = number - 1;
	
	for (k1 = 1; k1 <= number; k1++)
	{
		for (c1 = 1; c1 <= space1; c1++)
		{
			cout << " ";
		}
		space1--;

		for (c1 = 1; c1 <= (2 * k1 - 1); c1++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	space1 = 1;
	for (k1 = 1; k1 <= (number - 1); k1++)
	{
		for (c1 = 1; c1 <= space1; c1++)
		{
			cout << " ";
		}
		space1++;
		for (c1 = 1; c1 <= (2 * (number - k1) - 1); c1++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
