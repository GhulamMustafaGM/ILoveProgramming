// Even or Odd code 

#include<iostream>
using namespace std;

int main()
{
	int Number;

	cout << "Enter any number: ";
	cin >> Number;

	if (Number % 2 == 0)
	{
		cout << "This is an even number";
		cout << endl;
	}
	else
	{
		cout << "This is an odd number";
	}

	return 0;
}