// Search factorial number

#include<iostream>
using namespace std;
int main()
{
	int number, a, fact = 1;

	cout << "\nEnter number: ";
	cin >> number;

	for (a = number; a > 0; a--)
	{
		fact = fact * a;
	}
	cout << "Factorial of " << number << " is " << fact;
	cout << endl;

	return 0;
}