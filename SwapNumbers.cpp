// Swap two numbers

#include<iostream>
using namespace std;

int main()
{
	int number1, number2;
	int swap;

	cout << "\nEnter two numbers :";
	cout << "\nFirst Number:";
	cin >> number1;
	cout <<"Second Number:";
	cin >> number2;

	swap = number1;
	number1 = number2; 
	number2 = swap;

	cout << "The value of first and second number after swapping is \n";
	cout << "First number = " << number1 << "\n" << "second number =" << number2;
	cout << endl;

	return 0;
}
