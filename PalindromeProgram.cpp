// Palindrome or it is not

#include<iostream>
using namespace std;
int main()
{
	int number, remember, original, reverse = 0;

	cout << "\nEnter a number: ";
	cin >> number;
	original = number;
	
	while (number != 0)
	{
		remember = number % 10;
		reverse = reverse * 10 + remember;
		number = number / 10;
	}
	if (reverse == original) // Look if origional number is equal to its reverse
	{
		cout << "It is Palindrome";
	}
	else 
	{
		cout << "It is not palidrome";
	}
    cout << endl;
	return 0;
}