// Check Original values or not

#include<iostream>
using namespace std;

int main()
{
	int number, original, reverse = 0, remember;

	cout << "\nEnter a number:";
	cin >> number;

	original = number;

	while (number > 0)
	{
		remember = number % 10;
		reverse = reverse * 10 + remember;
		number = number / 10;
	}
	if (original == reverse)
	{
		cout << "Reverse is equal to original" << endl;
	}
	else
	{
		cout << "Reverse is not equal to original" << endl;
	}
	
	return 0;
}
