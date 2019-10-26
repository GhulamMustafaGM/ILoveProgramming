// Print add Numbers 

#include<iostream>
using namespace std;

int main()
{
	int a, b, total = 0, number;

	cout << "How many number you want to enter and add them ?";
	cin >> b;

	cout << "Enter " << b << "number:";
	for (a = 0; a < b; a++)
	{
		cin >> number;
		total = total + number;
	}
	cout << "Sum of all the " << b << " number is " << total;
    cout << endl;
	return 0;
}

