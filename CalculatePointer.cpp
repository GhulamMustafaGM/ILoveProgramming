// Calculate pinters

#include<iostream>
using namespace std;

int main()
{
	int val1, val2, *ptr1, *ptr2, total = 0;

	cout << "\nEnter the two numbers:";
	cin >> val1 >> val2;

	ptr1 = &val1;
	ptr2 = &val2;

	total = *ptr1 + *ptr2;

	cout << "Total of the two numbers: " << total << endl;

	return 0;
}